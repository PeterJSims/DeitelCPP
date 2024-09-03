//
// Created by Peter Sims on 3/31/24.
//
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int counter{0};
    int largest{INT_MIN};
    int secondLargest{INT_MIN};
    cout << "Enter ten sales: ";
    while (counter < 10) {
        int current;
        cin >> current;
        if (current > largest) {
            const int temp = largest;
            largest = current;
            secondLargest = temp;
        } else if (current > secondLargest) {
            secondLargest = current;
        }
        ++counter;
    }

    cout << fixed << setprecision(2) << "Largest sale:        $" << largest << "\n";
    cout << fixed << setprecision(2) << "Second Largest sale: $" << secondLargest;


    return 0;
}
