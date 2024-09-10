#include <format>
#include <iostream>

#include "exercise_classes/square.h"

int main() {
Square square{4};
std::cout << std::format("Perimeter: {}\n", square.perimeter());
std::cout << std::format("Area: {}\n", square.area());
std::cout << std::format("Diagonal: {}\n", square.diagonal());
  return 0;
}
