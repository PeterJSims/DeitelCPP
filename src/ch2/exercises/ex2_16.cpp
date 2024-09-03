#include <iostream>

using namespace std;

int main() {
    // only integers have been introduced
    int radius{0};
    cout << "Enter radius: ";
    cin >> radius;

    cout << "Diameter: " << radius * 2 << "\n";
    cout << "Circumference: " << (2 * 3.14159 * radius) << "\n";
    cout << "Area: " << (3.14159 * radius * radius) << "\n";

}