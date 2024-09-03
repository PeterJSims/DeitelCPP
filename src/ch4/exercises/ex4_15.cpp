#include <iostream>
#include <format>
using namespace std;

int main() {
    constexpr int accuracy{200'000};
    // constexpr int accuracy{30};
    constexpr double numerator{4.0};
    double denominator{1.0};
    long double piCalculation{0.0};
    int firstClose{0};
    cout << format("{}{:>15}\n", "term", "pi");
    for (int i{1}; i <= accuracy; ++i) {
        if (i % 2 == 0) {
            piCalculation -= numerator / denominator;
        } else {
            piCalculation += numerator / denominator;
        }
        if (to_string(piCalculation).starts_with("3.14") && firstClose == 0) {
            firstClose = i;
        }
        denominator += 2;
        cout << format("{:<2}{:>17.8f}\n", i, piCalculation);
    }
    cout << format("First close approximation: {}th iteration",firstClose);

    return 0;
}
