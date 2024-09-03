#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
int main() {
  const cpp_int bigNum{100'000'000'000'000};
  cout << "Cube of " << bigNum << " is " << (pow(bigNum, 3));
  return 0;
}