#include <format>
#include <iostream>

using namespace std;

int roundToInteger(double num);

double roundToTenths(double num);

double roundToHundreths(double num);

double roundToThousandths(double num);

int main() {
    double num;
    while (cin >> num) {
        cout << format("{}\n", roundToInteger(num));
        cout << format("{}\n", roundToTenths(num));
        cout << format("{}\n", roundToHundreths(num));
        cout << format("{}\n", roundToThousandths(num));
    }
}


int roundToInteger(const double num) {
    return floor(num + 0.5);
}

double roundToTenths(const double num) {
    return floor(num * 10 + 0.5) / 10;
}

double roundToHundreths(const double num) {
    return floor(num * 100 + 0.5) / 100;
}

double roundToThousandths(const double num) {
    return floor(num * 1000 + 0.5) / 1000;
}
