#include <format>
#include <iostream>
#include <regex>

std::string replaceSpaces(const std::string& s) {
  return regex_replace(s, std::regex(R"([ ]+)"), " ");
}


int main() {
  std::cout << replaceSpaces("Hello        there  are too   many        spaces!");


  return 0;
}