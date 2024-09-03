#include <format>
#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd; // used to seed the default_random_engine

    default_random_engine engine{rd()};
    uniform_int_distribution nums{1, 5};
    // a
    for (int i{0}; i < 5; ++i) {
        cout << nums(engine) * 2 << " ";
    }
    cout << "\n";
    // b
    for (int i{0}; i < 5; ++i) {
        cout << (nums(engine) * 2) + 1 << " ";
    }
    cout << "\n";
    // c
    for (int i{0}; i < 5; ++i) {
        cout << ((nums(engine) * 2) + 1) * 2 << " ";
    }
    return 0;
}
