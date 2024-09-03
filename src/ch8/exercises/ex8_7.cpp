#include <format>
#include <iostream>



int main() {

  std::string word;
  while (std::cin >> word) {
    if(word.starts_with('b')) {
      std::cout << word;
    }
  }
  return 0;
}