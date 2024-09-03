#include <format>
#include <iostream>
#include <span>

void printCharArray(std::span<const char> s){
  for (const auto & item : s) {
    std::cout << item << " ";
  }
  std::cout << "\n";

};


int main() {
  constexpr char day[]{"Sunday"};
  constexpr char day2[]{'S', 'u', 'n', 'd', 'a', 'y'};
  constexpr char day3[]{'S', 'u', 'n', 'd', 'a', 'y', '\0'};
  printCharArray((day));
  printCharArray((day2));
  printCharArray((day3));
  std::cout << day3 << std::endl;

  return 0;
}