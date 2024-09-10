#include <format>
#include <iostream>
#include "../notes/Time.h"

int main() {
    // auto time = std::make_unique<Time>();
    auto* time = new Time{};
    time->setTime(6, 45, 0);
    std::cout << time->to12HourString();

    delete time;
    return 0;
}
