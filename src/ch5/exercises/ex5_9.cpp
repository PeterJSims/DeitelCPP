#include <format>
#include <iomanip>
#include <iostream>

using namespace std;

double hypotenuse(const double a, const double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double a, b;
    cout << "Enter two sides of a right triangle to get its hypotenuse: ";
    cin >> a >> b;
    cout << fixed << setprecision(2) << hypotenuse(a, b);

    return 0;
}
