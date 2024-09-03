#include <iostream>
#include <format>

using namespace std;

long fibonacci(int n);

int main() {
  cout << fibonacci(20);
  return 0;

}


long fibonacci(const int n) {
  long current{0};
  long next{1};
  for (int i{0}; i < n; ++i) {
    const long temp{next};
    next = next + current;
    current = temp;
  }
  return current;
}
