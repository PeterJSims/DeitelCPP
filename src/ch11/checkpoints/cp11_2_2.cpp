//
// Created by Peter Sims on 9/22/24.
//

#include <iostream>
#include <format>
#include <string>

int main() {
  std::string s{"01234567890123456789"};
  std::cout << s.length() << "\n";
  s = s.substr(0, 17);
  std::cout << s.length() << "\n";

  return 0;
}