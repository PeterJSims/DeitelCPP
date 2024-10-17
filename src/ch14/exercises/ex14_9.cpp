//
// Created by Peter Sims on 10/16/24.
//

#include <iostream>
#include <print>
#include <algorithm>
#include <iterator>

// 2 9 5 0 -3 6 5 12 9 14 -7 19 4 -4 19 17 2 21 34 11
int main() {
  constexpr int size{20};
  std::ostream_iterator<int> ostream{std::cout, " "};
  std::array<int, size> ints{};

  for (int i{0}; i < size; ++i) {
    std::cin >> ints[i];
  }
  std::ranges::sort(ints);

  std::vector<int> uniqueInts{};
  std::ranges::unique_copy(ints, std::back_inserter(uniqueInts));

  std::ranges::copy(uniqueInts, ostream);


  return 0;
}