//
// Created by Peter Sims on 9/9/24.
//

#include <array>
#include <format>
#include "date_and_time.h"

std::array monthLengths{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
constexpr int maxSeconds{86400};

DateAndTime::DateAndTime(const int month, const int day, const int year, const int hour, const int minute,
                         const int second) {
    setDate(month, day, year);
    setTime(hour, minute, second);
}

void DateAndTime::setDate(const int month, const int day, const int year) {
    if (month < 1 || month > 12) {
        throw std::invalid_argument{"month was out of range"};
    }

    int dateMax{monthLengths[month]};
    if (day < 1) {
        throw std::invalid_argument{"day was out of range"};
    }
    if (month == 2) {
        if (const auto isLeap = isLeapYear(year); isLeap) { ++dateMax; }
    }
    if (day > dateMax) {
        throw std::invalid_argument{"day was out of range"};
    }

    m_month = month;
    m_day = day;
    m_year = year;
    adjustForLeapYear(year);
}

void DateAndTime::setTime(const int hour, const int minute, const int second) {

    if (hour < 0 || hour >= 24) {
        throw std::invalid_argument{"hour was out of range"};
    }

    if (minute < 0 || minute >= 60) {
        throw std::invalid_argument{"minute was out of range"};
    }

    if (second < 0 || second >= 60) {
        throw std::invalid_argument{"second was out of range"};
    }

    m_seconds = hour * 3600 + minute * 60 + second;
}

void DateAndTime::nextDay() {
    if (const int currentMonthMax{monthLengths[m_month]}; currentMonthMax == m_day) {
        if (m_month == 12) {
            ++m_year;
            m_month = 1;
        } else {
            ++m_month;
        }
        m_day = 1;
    } else {
        ++m_day;
    }
}

int DateAndTime::getMonth() const { return m_month; }

void DateAndTime::setMonth(const int month) { setDate(month, getDay(), getYear()); }

int DateAndTime::getDay() const { return m_day; }

void DateAndTime::setDay(const int day) { setDate(getMonth(), day, getYear()); }

int DateAndTime::getYear() const { return m_year; }

void DateAndTime::setYear(const int year) { setDate(getMonth(), getDay(), year); }

void DateAndTime::adjustForLeapYear(const int year) {
    // adjust for leap year
    if (isLeapYear(year)) {
        monthLengths[2] = 29;
    } else {
        monthLengths[2] = 28;
    }
}

bool DateAndTime::isLeapYear(int year) {
    bool leapYear{false};
    if (year % 4 == 0) {
        leapYear = true;
    }
    if (year % 100 == 0) {
        leapYear = false;
    }
    if (year % 400 == 0) {
        leapYear = true;
    }
    return leapYear;
}


void DateAndTime::tick() {
    int seconds = m_seconds + 1;

    if (seconds == maxSeconds) {
        seconds = 0;
        nextDay();
    }
    m_seconds = seconds;
}


int DateAndTime::getHour() const { return m_seconds / 3600; }

void DateAndTime::setHour(const int hour) { setTime(hour, getMinute(), getSecond()); }

int DateAndTime::getMinute() const { return (m_seconds % 3600) / 60; }

void DateAndTime::setMinute(const int minute) { setTime(getHour(), minute, getSecond()); }

int DateAndTime::getSecond() const { return m_seconds % 60; }

void DateAndTime::setSecond(const int second) { setTime(getHour(), getMinute(), second); }

std::string DateAndTime::toStandardString() const {
    return std::format("{}-{:02d}-{:02d} {:02d}:{:02d}:{:02d}",
                       getYear(), getMonth(), getDay(), getHour(), getMinute(), getSecond());
}

std::string DateAndTime::toUniversalString() const {
    return std::format("{}-{:02d}-{:02d}T{:02d}:{:02d}:{:02d}Z",
                       getYear(), getMonth(), getDay(), getHour(), getMinute(), getSecond());
}
