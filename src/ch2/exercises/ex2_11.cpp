#include <iostream>

using namespace std;

int main() {
    int a{0}, b{0};
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum: " << (a + b) << "\n";
    cout << "Product: " << (a * b) << "\n";
    cout << "Difference: " << (a - b) << "\n";
    cout << "Quotient: " << (a / b) << "\n";

}