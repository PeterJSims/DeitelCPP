//
// Created by Peter Sims on 10/17/24.
//

#include <iostream>
#include <print>
#include <random>
#include <ranges>

int main() {
  constexpr int n{50};

  std::default_random_engine engine{};
  std::uniform_int_distribution distribution(1, 1000);
  std::vector<int> randomInts{};
  for (int i{0}; i < n; ++i) {
    randomInts.push_back(distribution(engine));
  }
  std::vector<int> sorted{};
  auto filtered{randomInts | std::views::filter([](int x) { return x % 2 != 0; })};
  std::ranges::copy(filtered, std::back_inserter(sorted));
  std::sort(sorted.begin(), sorted.end());

  std::println("{:n}", sorted);






  return 0;
}