#include <format>
#include <iostream>

using namespace std;

double calculateCharges(double hours) {
    constexpr double maximumCharge{50.00};
    constexpr double perHourFee{5.00};
    constexpr double minimumFee{20.00};
    double charge{minimumFee};

    if (hours > 3) {
        hours -= 3;
        charge += (hours * perHourFee);
    }
    return min(charge, maximumCharge);
}

int main() {
    // Still no vectors/arrays so three variables are needed
    cout << "Enter three durations of parking to be calculated: ";
    double hoursOne, hoursTwo, hoursThree;
    cin >> hoursOne >> hoursTwo >> hoursThree;


    double totalHours{hoursOne + hoursTwo + hoursThree};
    double totalCharge{calculateCharges((hoursOne)) + calculateCharges(hoursTwo) + calculateCharges(hoursThree)};
    cout << "\n";
    cout << format("{}{:>15}{:>15}\n", "Car", "Hours", "Charge");
    cout << format("{}{:>17.1f}{:>15.2f}\n", "1", hoursOne, calculateCharges((hoursOne)));
    cout << format("{}{:>17.1f}{:>15.2f}\n", "2", hoursTwo, calculateCharges((hoursTwo)));
    cout << format("{}{:>17.1f}{:>15.2f}\n", "3", hoursThree, calculateCharges((hoursThree)));
    cout << format("{}{:>13.1f}{:>15.2f}\n", "TOTAL", totalHours, totalCharge);
    return 0;
}
