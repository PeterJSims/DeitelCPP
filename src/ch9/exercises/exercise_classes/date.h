//
// Created by Peter Sims on 9/6/24.
//

#ifndef DATE_H
#define DATE_H
#include <array>
#include <string>

// exercises assume all but month are correct
class Date {
    std::array<int, 13> monthLengths{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

public:
    Date(int month, int day, int year): m_month(month), m_day(day), m_year(year) {
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

        // adjust for leap years
        setYear(year);
    }

    void nextDay() {
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
    };


    int getMonth() const {
        return m_month;
    }

    void setMonth(const int month) {
        m_month = month;
    }

    int getDay() const {
        return m_day;
    }

    void setDay(const int day) {
        m_day = day;
    }

    int getYear() const {
        return m_year;
    }

    void setYear(const int year) {
        // adjust for leap year
        if(isLeapYear(year)) {
            monthLengths[2] = 29;
        } else {
            monthLengths[2] = 28;
        }
        m_year = year;
    }

private:
    int m_month{};
    int m_day{};
    int m_year{};

    static bool isLeapYear(const int year) {
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
};


#endif //DATE_H
