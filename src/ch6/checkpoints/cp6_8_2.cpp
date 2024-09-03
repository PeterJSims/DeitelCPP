#include <format>
#include <iostream>


int main() {
  std::array grades{80, 97, 75};
  double total{0.0};
  for (const int& grade: grades) {
    total += grade;
  }
  std::cout << total / grades.size() << "\n";

  return 0;
}