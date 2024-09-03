#include <iostream>

using namespace std;

int main() {
    int row{10};
    while (row >= 1) {
        int column{1};
        while (column <= 10) {
            cout << (row % 2 != 0 ? "<" : ">");
            ++column;
        }
        --row;
        cout << "\n";
    }
    return 0;
}
