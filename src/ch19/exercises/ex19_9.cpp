//
// Created by Peter Sims on 11/11/24.
//

#include <iostream>


int main() {
  int x{30};
  int* xPtr{&x};


  std::cout << static_cast<int>(*xPtr) << '\n';
  std::cout << static_cast<short>(*xPtr) << '\n';
  std::cout << static_cast<long>(*xPtr) << '\n';
  std::cout << static_cast<long long >(*xPtr) << '\n';
  return 0;
}