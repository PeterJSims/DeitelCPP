//
// Created by Peter Sims on 9/28/24.
//

#include <iostream>
#include <format>

double simpleFunction(int n) {
  if(n < 0) {
    throw std::invalid_argument("Invalid");
  }
  return sqrt(n);
}
int main() {
  try {
    auto x{simpleFunction(-3)};

  } catch (std::invalid_argument& err) {
    std::cout << "Here\n";
    throw std::invalid_argument("Invalid");
    std::cout << "After\n";
  }
  return 0;
}