#include <format>
#include <iostream>

using namespace std;

int gcd(const int a, const int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two numbers to get their greatest common divisor: ";
    cin >> a >> b;
    cout << gcd(a, b);

    return 0;
}
