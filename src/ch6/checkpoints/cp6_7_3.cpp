#include <format>
#include <iostream>


int main() {
  std::array grades{80, 92, 73};
  for (int i{0}; i < grades.size(); ++i) {
    std::cout << std::format("{} ", grades[i]);
  }

  std::cout << "\n";

  for(const int& grade: grades) {
    std::cout << std::format("{} ", grade);
  }

  return 0;
}