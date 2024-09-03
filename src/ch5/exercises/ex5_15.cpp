#include <format>
#include <iostream>

using namespace std;

double minDouble(const double a, const double b, const double c) {
    if (a <= b && a <= c) {
        return a;
    }
    if (b <= a && b <= c) {
        return b;
    }
    return c;
}

int main() {
    double a, b, c;

    while (cin >> a >> b >> c) {
        cout << format("{}\n", minDouble(a, b, c));
    }
    return 0;
}
