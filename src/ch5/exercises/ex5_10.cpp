#include <format>
#include <iostream>

using namespace std;

bool isMultiple(const int a, const int b) {
    return b % a == 0;
}

int main() {
    constexpr int xBox{5};
    cout << xBox;
    cout << "***Is B a Multiple of A?***\n";
    int a, b;
    while (cin) {
        cin >> a >> b;
        cout << format("{}\n",isMultiple(a, b));

    }
    return 0;
}
