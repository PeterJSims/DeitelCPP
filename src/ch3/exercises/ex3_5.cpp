#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    constexpr int flatRate{200};
    constexpr double commision{.09};
    const string prompt{"Enter sales in dollars (-1 to end): "};

    int salesDollars;
    cout << prompt;
    cin >> salesDollars;

    while (salesDollars != -1) {
        const double salary{flatRate + (salesDollars * commision)};
        cout << fixed << setprecision(2) << "Salary is: $" << salary << "\n\n";

        cout << prompt;
        cin >> salesDollars;
    }
    return 0;
}
