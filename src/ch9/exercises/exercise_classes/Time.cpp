// Fig. 9.11: Time.cpp
// Member-function definitions for class Time.
#include <format>
#include <stdexcept>
#include <string>
#include "Time.h" // include definition of class Time from Time.h
#include <iostream>

constexpr int maxSeconds{86399};

// Time constructor initializes each data member    
Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}

// set new Time value using 24-hour time
void Time::setTime(int hour, int minute, int second) {
    // validate hour, minute and second
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

// set hour value
void Time::setHour(int hour) { setTime(hour, getMinute(), getSecond()); }

// set minute value
void Time::setMinute(int minute) { setTime(getHour(), minute, getSecond()); }

// set second value
void Time::setSecond(int second) { setTime(getHour(), getMinute(), second); }

// return hour value
int Time::getHour() const { return m_seconds / 3600; }

// return minute value
int Time::getMinute() const { return (m_seconds % 3600) / 60; }

// return second value
int Time::getSecond() const { return m_seconds % 60; }

void Time::tick() {
    int seconds = m_seconds + 1;

    if (seconds == maxSeconds + 1) {
        seconds = 0;
    }
    m_seconds = seconds;
}

// return Time as a string in 24-hour format (HH:MM:SS)
std::string Time::to24HourString() const {
    return std::format("{:02d}:{:02d}:{:02d}",
                       getHour(), getMinute(), getSecond());
}

// return Time as a string in 12-hour format (HH:MM:SS AM or PM)
std::string Time::to12HourString() const {
    return std::format("{}:{:02d}:{:02d} {}",
                       ((getHour() % 12 == 0) ? 12 : getHour() % 12),
                       getMinute(), getSecond(), (getHour() < 12 ? "AM" : "PM"));
}

/**************************************************************************
 * (C) Copyright 1992-2022 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
