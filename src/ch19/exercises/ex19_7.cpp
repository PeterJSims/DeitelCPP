//
// Created by Peter Sims on 11/11/24.
//

#include <iostream>
#include <format>

int main() {
// a
std::cout << std::format("{:<15d}\n", 40000); // "40000          " printed

  // b
std::cout << std::format("{:+d} {:d}\n", 200, 200 );

  // c
std::cout << std::format("{:#x}\n", 100);

  // d
std::cout << std::format("{:09.3f}", 1.234);
  return 0;
}