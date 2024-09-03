#include <iostream>

using namespace std;

int main() {
    // without for loops, just while loops
    int size{0};
    int currentRow{0};
    cout << "Size: ";
    cin >> size;

    while (currentRow < size) {
        int currentColumn{0};
        if (currentRow == 0 || currentRow == (size - 1)) {
            while (currentColumn < size) {
                cout << "*";
                ++currentColumn;
            }
        } else {
            while (currentColumn < size) {
                if (currentColumn == 0 || currentColumn == (size - 1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++currentColumn;
            }
        }
        cout << "\n";
        ++currentRow;
    }

    return 0;
}
