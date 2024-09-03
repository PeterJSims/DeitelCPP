#include <iostream>

using namespace std;

void ex3_11() {
  int count{1};
  while(count <= 10) {
    cout << (count % 2 == 1 ? "****" : "++++++++") << "\n";
    ++count;
  }
}