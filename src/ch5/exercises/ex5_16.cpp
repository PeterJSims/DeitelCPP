#include <format>
#include <iostream>

using namespace std;

bool isPerfect(const int num) {
    int sum{1};
    for (int i{2}; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void printDivisors(const int num) {
    cout << format("{}: ", num);
    cout << "1 ";
    for (int i{2}; i <= num / 2; ++i) {
        if (num % i == 0)
            cout << i << " ";
    }
}

int main() {
    constexpr int n{1000};

    for (int i{2}; i <= n; ++i) {
        if (isPerfect(i)) {
            printDivisors(i);
            cout << "\n";
        }
    }

    return 0;
}
