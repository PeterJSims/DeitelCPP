#include <format>
#include <iostream>



int main() {
  // std::string_view s{"Hello there"};
  // for (char c : s) std::cout << c;
  std::string s2{"test.string"};
  s2.replace(4, 5, "|");
std::cout << s2;
  return 0;
}