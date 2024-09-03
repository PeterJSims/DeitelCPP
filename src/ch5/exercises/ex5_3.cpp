#include <format>
#include <iostream>

using namespace std;

int nearestInteger(const double num) {
    return floor(num + 0.5);
}

int main() {
    cout << "Enter numbers to see their nearest integer: ";

    double num;
    while (cin >> num) {
        cout << format("{} -> {}\n", num, nearestInteger(num));
    }
    return 0;
}
