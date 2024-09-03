#include <iostream>
#include <format>

using namespace std;

int main() {
  constexpr double tax = .0625;
  constexpr double bill = 37.45;
  cout << format("Total bill: {:.2f}", bill * (1.0 + tax));


  return 0;
}