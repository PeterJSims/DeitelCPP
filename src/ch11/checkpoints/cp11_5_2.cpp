//
// Created by Peter Sims on 9/22/24.
//

#include <iostream>
#include <format>
#include <memory>
int main() {
  auto strPtr{std::make_unique<std::string>("Hello")};
  std::cout << *strPtr;
  return 0;
}