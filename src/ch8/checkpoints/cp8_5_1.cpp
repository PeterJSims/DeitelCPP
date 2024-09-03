#include <format>
#include <iostream>



int main() {
  std::string name1{"Bob"};
  std::string name2{"Bill"};
  std::cout << std::format("Name one: {}\n", name1);
  std::cout << std::format("Name two: {}\n", name2);
  std::cout << "SWAP\n";
  name1.swap(name2);
  std::cout << std::format("Name one: {}\n", name1);
  std::cout << std::format("Name two: {}\n", name2);
  return 0;
}