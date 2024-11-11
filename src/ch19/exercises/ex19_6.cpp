//
// Created by Peter Sims on 11/11/24.
//

#include <iostream>
#include <iomanip>


int main() {
  // a
  std::cout << std::setw(15) << std::left << 40000 << '\n'; // "40000          " is the result

  // b
  // char state[11];
  // std::cin.get(state, sizeof(state));
  // testing
  // std::println("{}", state);

  // c
  std::cout << std::showpos << 400 << std::noshowpos << " " << 400 << '\n';

  // d
  std::cout << std::showbase << std::hex << 100 << '\n';

  // e
  // char charArray[10]{};
  // std::cin.getline(charArray, 10, 'p');

  // f
  std::cout << std::setw(9) << std::setfill('0') << std::right <<std::fixed << std::setprecision(3) << 1.234;



  return 0;
}