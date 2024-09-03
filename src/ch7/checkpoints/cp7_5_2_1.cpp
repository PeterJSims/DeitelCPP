#include <format>
#include <iostream>



int main() {
  double temps[]{97.4, 99.1, 98.3, 98.6};
  for (int i{0}; i < 4; ++i) {
    std::cout << temps[i] << " ";
  }
  return 0;
}