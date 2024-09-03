#include <iostream>
#include <format>
using namespace std;

int main() {
    // vectors not introduced yet
    constexpr double prodOne{2.98},
            prodTwo{4.50},
            prodThree{9.98},
            prodFour{4.49},
            prodFive{6.87};
    double totalSales{0.0};
    const string prompt{"Enter product numbers and quantities. Product number -1 to quit: "};
    cout << prompt;

    int choice;
    int quantity;

    cin >> choice;
    while (choice != -1) {
        if (choice < 1 || choice >> 5) {
            cout << "Enter a valid product number (1 to 5): ";
            cin >> choice;
            continue;
        }

        cout << "Quantity: ";
        cin >> quantity;

        switch (choice) {
            case 1:
                totalSales += quantity * prodOne;
                break;
            case 2:
                totalSales += quantity * prodTwo;
                break;
            case 3:
                totalSales += quantity * prodThree;
                break;
            case 4:
                totalSales += quantity * prodFour;
                break;
            case 5:
                totalSales += quantity * prodFive;
                break;
            default:
                break;
        }

        cout << prompt;
        cin >> choice;
    }
    cout << format("Total sales: ${:.2f}", totalSales);

    return 0;
}
