#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;


int main() {
    // Using boost in order to allow any length/avoid integer overflow
    // and not relying on string manipulation

    cpp_int binNum;
    cout << "Enter a binary number: ";
    cin >> binNum;
    cpp_int total{0};
    cpp_int currentPowerOf2{1};

    while (binNum > 0) {
        const int rightDigit{binNum % 10};
        total += rightDigit * currentPowerOf2;
        binNum /= 10;
        currentPowerOf2 *= 2;
        cout << binNum << " " << currentPowerOf2 << "\n";
    }

    cout << "Decimal equivalent: " << total;
    return 0;
}
