#include <format>
#include <iostream>
#include <fstream> // contains file stream processing types



int main() {

  if(std::ofstream output{"inventory_report.txt"}) {
    std::cout << "File opened" << std::endl;
  } else {
    std::cerr << "Error opening file" << std::endl;
    return EXIT_FAILURE;
  }

  return 0;
}