#include <format>
#include <iostream>

class Time {
    int m_totalSeconds{};

public:
    explicit Time(int m_total_seconds)
        : m_totalSeconds(m_total_seconds) {
    }


    int getTotalSeconds1() {
        return this->m_totalSeconds;
    }

    int getTotalSeconds2() {
        return (*this).m_totalSeconds;
    }
};

int main() {
    Time time{10};
    std::cout << time.getTotalSeconds1() << std::endl;
    std::cout << time.getTotalSeconds2() << std::endl;
    return 0;
}
