#include <format>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

cpp_int integerPower(const int base, const int exponent) {
    cpp_int result{base};
    for (int i{0}; i < exponent - 1; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Base: ";
    cin >> base;
    cout << "Exponent: ";
    cin >> exponent;
    cout << integerPower(base, exponent);
  return 0;
}