#include <iostream>

using namespace std;

int main() {
    // Limited on language aspects usable here
    cout << "Enter a five digit number: ";
    int num{0};
    cin >> num;

    const int tenThousands{num / 10000};
    num %= 10'000;
    const int thousands{num / 1000};
    num %= 1'000;
    const int hundreds{num / 100};
    num %= 100;
    const int tens{num / 10};
    num %= 10;
    const int ones{num};

    if (tenThousands == ones && thousands == tens) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }


    return 0;
}
