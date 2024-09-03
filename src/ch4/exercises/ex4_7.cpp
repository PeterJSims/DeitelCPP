#include <iostream>

using namespace std;

int main() {
    int count;
    cin >> count;

    int min{INT_MAX};

    int current;
    for (int i{0}; i < count; ++i) {
        cin >> current;
        if (current < min) {
            min = current;
        }
    }
    cout << min;
    return 0;
}
