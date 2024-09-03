#include <iostream>
#include <format>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;


int main() {
    int num;
    cout << "What number would you like the factorial of: ";
    cin >> num;

    cpp_int factorial{1};
    for (int i{2}; i <= num; ++i) {
        factorial *= i;
    }
    cout << num << "!: " << factorial << endl;
    return 0;
}
