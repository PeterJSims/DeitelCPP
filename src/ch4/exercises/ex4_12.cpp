#include <iostream>
#include <format>
using namespace std;

int main() {
    // vectors not introduced yet
    int one, two, three, four, five;
    cin >> one >> two >> three >> four >> five;

    cout << format("{:>2}:", one);
    for (int i{0}; i < one; ++i) {
        cout << "*";
    }
    cout << "\n";

    cout << format("{:>2}:", two);
    for (int i{0}; i < two; ++i) {
        cout << "*";
    }
    cout << "\n";

    cout << format("{:>2}:", three);
    for (int i{0}; i < three; ++i) {
        cout << "*";
    }
    cout << "\n";

    cout << format("{:>2}:", four);
    for (int i{0}; i < four; ++i) {
        cout << "*";
    }
    cout << "\n";
    cout << format("{:>2}:", five);
    for (int i{0}; i < five; ++i) {
        cout << "*";
    }
    return 0;
}
