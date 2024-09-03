#include <iostream>

using namespace std;

int main() {
  int remaining{3};
  int num{0};

  while (remaining > 0) {
    cout << "Input an integer: ";
    cin >> num;
    if(num % 2 == 0) {
      cout << "Even!\n";
    } else {
      cout << "Odd!\n";
    }
    --remaining;

  }
  return 0;
}