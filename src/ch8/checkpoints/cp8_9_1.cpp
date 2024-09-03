#include <format>
#include <iostream>



int main() {
  std::string s{"Khan Zara"};

  s.insert(4, ",");

  std::cout << s << std::endl;
  return 0;
}