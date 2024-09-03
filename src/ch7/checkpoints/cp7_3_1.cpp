#include <format>
#include <iostream>



int main() {
  constexpr int grade{90};
  const int *gradePtr{&grade};
  std::cout << gradePtr << "\n";
  std::cout << *gradePtr << std::endl;
  return 0;
}