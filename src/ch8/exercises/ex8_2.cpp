#include <format>
#include <iostream>



int main() {
  std::string first;
  std::string last;
  std::cin >> first >> last;

  std::string concat(first + " " + last);
  std::string concat2(first.append(" ").append(last));

  std::cout << std::format("{}\n{}", concat, concat2);



  return 0;
}