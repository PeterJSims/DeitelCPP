//
// Created by Peter Sims on 9/23/24.
//

#include <iostream>

#include "exercise_classes/fraction.h"


// int gcd(const int a, const int b) {
//   if (a == 0) {
//     return b;
//   }
//   return gcd(b % a, a);
// }
//
// int lcm(const int a, const int b) {
//   return (a / gcd(a, b)) * b;
// }

int main() {
    Fraction fractionOne{3, 15};
    Fraction fractionTwo{2, 7};
    auto x = fractionOne + fractionTwo;
    std::cout << x.toString() << "\n";

    fractionOne = Fraction(3, 4);
    fractionTwo = Fraction(4, 5);

    x = fractionOne * fractionTwo;
    std::cout << x.toString() << "\n";
    std::cout << (fractionOne < fractionTwo);


    return 0;
}
