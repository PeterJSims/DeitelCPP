#include <format>
#include <iostream>

using namespace std;

int quotient(const int a, const int b) {
    return a / b;
}

int remainder(const int a, const int b) {
    return a % b;
}

int countDigits(int num) {
    if (num == 0) return 1;
    int count{0};
    while (num > 0) {
        ++count;
        num /= 10;
    }
    return count;
}

void printSeparatedNumber(int num) {
    int currentPlace{1};
    for (int i{0}; i < countDigits(num); ++i) {
        currentPlace *= 10;
    }

    while (currentPlace >= 10) {
        currentPlace /= 10;
        const int leftDigit = quotient(num, currentPlace);
        cout << leftDigit << "  ";
        num = remainder(num, currentPlace);
    }
}

int main() {
    int num;
    cin >> num;
    printSeparatedNumber(num);

    return 0;
}
