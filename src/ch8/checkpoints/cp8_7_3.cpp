#include <format>
#include <iostream>



int main() {
  std::string s{"test string"};
  std::cout << s.find_last_of("aeiou") << "\n";
  std::cout << s.at(s.find_last_of("aeiou")) << "\n";
  return 0;
}