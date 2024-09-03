#include <iostream>

using namespace std;

int main() {
    constexpr int rows{8};
    constexpr int columns{16};

    int currentRow{0};
    cout << "\n\n";

    while (currentRow < rows) {
        int currentCol{0};
        while (currentCol < columns) {
            if((currentRow + currentCol) % 2 == 0) {
                cout << "* ";
            } else {
                cout << " ";
            }
            ++currentCol;
        }
        cout << "\n";
        ++currentRow;
    }
    cout << "\n\n";


    return 0;
}
