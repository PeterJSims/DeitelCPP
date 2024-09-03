#include <iostream>

using namespace std;

int main() {
    double a{0}, b{0}, c{0};
    cout << "Enter the three sides of a possible right triangle: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Please enter positive side lengths";
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        cout << "This is a valid right triangle";
    } else {
        cout << "These sides do not represent a legitimate triangle";
    }

    return 0;
}
