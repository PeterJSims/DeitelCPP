#include <format>
#include <iomanip>
#include <iostream>



int main() {
  std::string name{"Nella Chirwa"};

  std::cout << std::quoted(name);

  return 0;
}