#include <format>
#include <iostream>
#include <random>

int main() {
  int flips;
  std::cout << "How many coin flips? ";
  std::cin >> flips;

  std::random_device rd; // used to seed the default_random_engine
  std::default_random_engine engine{rd()}; // rd() produces a seed
  std::uniform_int_distribution randomCoin{0, 1};

  constexpr size_t arraySize{2};
  std::array<int, arraySize> frequency{}; // initialize to 0s

  for (int flip{0}; flip <= flips; ++flip) {
    ++frequency.at(randomCoin(engine));
  }

  std::cout << std::format("\n{}{:>13}\n", "Side", "Frequency");

  // output each array element's value
  for (size_t entry{0}; entry < frequency.size(); ++entry) {
    std::cout << std::format("{:<8}{}\n", entry == 0 ? "Heads" : "Tails", frequency.at(entry));
  }

  double headsAvg{frequency[0] * 1.0 / flips};
  std::cout << std::format("{:<8}{:.2f}%\n", "Heads",headsAvg);


  return 0;
}