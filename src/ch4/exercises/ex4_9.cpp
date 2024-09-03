#include <iostream>
#include <format>
using namespace std;

int main() {
  long fact{1};
  for (int i{1}; i <= 15; ++i) {
    fact *= i;
  }
  cout << fact;

  return 0;
}