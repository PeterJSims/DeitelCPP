#include <format>
#include <iostream>

using namespace std;

int calculateSeconds(const int hour, const int minutes, const int seconds) {
    return (hour * 3600) + (minutes * 60) + seconds;
}

int main() {
    cout << "Enter hours, minutes, and seconds: ";
    int hours, minutes, seconds;
    cin >> hours >> minutes >> seconds;
    cout << calculateSeconds(hours, minutes, seconds);

    return 0;
}
