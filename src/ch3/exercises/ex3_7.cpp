#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int counter{0};
  int largest{INT_MIN};
  cout << "Enter ten sales: ";
  while (counter < 10) {
    int current;
    cin >> current;
    if(current > largest) {
      largest = current;
    }
    ++counter;
  }
  cout << fixed << setprecision(2) << "Largest sale: $" << largest;

  return 0;
}