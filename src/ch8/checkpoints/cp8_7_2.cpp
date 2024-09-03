#include <format>
#include <iostream>



int main() {
  std::string s{"test string"};
  std::cout << s.find_first_of("aeiou") << "\n";
  // std::cout << s.find_first_not_of("aeiou") << "\n";
  // std::cout << s.find_last_of("aeiou") << "\n";
  // std::cout << s.find_last_not_of("aeiou") << "\n";

  return 0;
}