#include <iostream>

using namespace std;

int main() {
    double a{0}, b{0}, c{0};
    cout << "Enter the three sides of a possible triangle: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Please enter positive side lengths";
    } else (a + b > c && a + c > b && b + c > a) {
        cout << "This is a valid triangle";
    } else {
        cout << "These sides do not represent a legitimate triangle";
    }

    return 0;
}
