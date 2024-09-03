#include <format>
#include <iostream>



int main() {

  // a
  // int* number;
  // std::cout << number << "\n";
  // number is not initialized to a value or nullptr

  // b
  // double *realPtr{nullptr};
  // long *integerPtr{nullptr};
  // integerPtr = realPtr;
  // incompatible pointer types

  // c
  // char s[]{"this is a character array"};
  // for(; *s != '\0'; ++s) {
  //   std::cout << *s << ' ';
  // }
  // can't increment s

  // d
  // double x{19.34};
  // double xPtr{&x};
  // std::cout << xPtr << "\n";
  // xPtr declared as double and not double pointer

  return 0;
}