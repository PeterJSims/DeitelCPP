#include <format>
#include <iostream>
#include <fstream>



int main() {
  if (std::ifstream input{"file.txt"}) {
    input.seekg(0);
  } else {
    std::cerr << "Error opening file";
  }

  return 0;
}