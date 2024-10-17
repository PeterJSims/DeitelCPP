//
// Created by Peter Sims on 10/16/24.
//

#include <iostream>
#include <print>
#include <algorithm>
int main() {
  std::vector elements{1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9};
  auto [first, last]{std::ranges::unique(elements)};
  elements.erase(first, last);
  std::println("{}", elements);

  return 0;
}