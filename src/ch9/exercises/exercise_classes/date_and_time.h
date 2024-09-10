//
// Created by Peter Sims on 9/9/24.
//

#ifndef DATE_AND_TIME_H
#define DATE_AND_TIME_H

#include <string>

class DateAndTime {
public:
    explicit DateAndTime(int month = 1, int day = 1, int year = 1970, int hour = 0, int minute = 0, int second = 0);

    void setDate(int month, int day, int year);
    void setTime(int hour, int minute, int second);

    void nextDay();
    int getMonth() const;
    void setMonth(int month);
    int getDay() const;
    void setDay(int day);
    int getYear() const;

    void tick();
    int getHour() const;
    void setHour(int hour);
    int getMinute() const;
    void setMinute(int minute);
    int getSecond() const;
    void setSecond(int second);
    void setYear(int year);


    std::string toStandardString() const;
    std::string toUniversalString() const;

private:
    int m_month{};
    int m_day{};
    int m_year{};
    int m_seconds{};
    static void adjustForLeapYear(int year);
    static bool isLeapYear(int year);
};


#endif //DATE_AND_TIME_H
