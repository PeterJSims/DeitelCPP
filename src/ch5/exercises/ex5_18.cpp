#include <iostream>

using namespace std;

int reverseDigits(int n) {
    int reversed{0};
    while (n > 0) {
        int rightDigit = n % 10;
        n /= 10;
        reversed *= 10;
        reversed += rightDigit;
    }
    return reversed;
}

int main() {
    int num;
    cin >> num;
    cout << reverseDigits(num);

    return 0;
}
