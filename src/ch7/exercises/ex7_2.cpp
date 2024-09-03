#include <format>
#include <iostream>



int main() {
  double number1{7.3};
  double number2;
  // a
  double *doublePtr{nullptr};
  // b
  doublePtr = &number1;
  // c
  std::cout << *doublePtr << "\n";
  // d
  number2 = *doublePtr;
  // e
  std::cout << number2 << "\n";
  // f
  std::cout << &number1 << "\n";
  // g
  std::cout << doublePtr << "\n";


  return 0;
}