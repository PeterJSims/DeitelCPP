#include <iostream>
#include <format>
using namespace std;

int main() {
    constexpr int rows{10};
    constexpr int columns{10};

    // a
    for (int i{1}; i <= rows; ++i) {
        for (int j{1}; j <= i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "-----------\n\n";

    // b
    for (int i{rows}; i >= 1; --i) {
        for (int j{0}; j < i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "-----------\n\n";

    // c
    for (int i{1}; i <= rows; ++i) {
        for (int j{1}; j <= columns; ++j) {
            if (j < i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
    cout << "-----------\n\n";

    // d
    for (int i{rows}; i >= 1; --i) {
        for (int j{0}; j <= columns; ++j) {
            if (j < i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}
