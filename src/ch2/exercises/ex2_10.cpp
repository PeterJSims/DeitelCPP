#include <iostream>

using namespace std;

/*
 * Calculates the product of three integers
 */
int main() {
    int x{0}, y{0}, z{0};
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    int result = x * y * z;
    cout << "The product is: " << result << "\n";
}