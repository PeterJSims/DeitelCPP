#include <format>
#include <iostream>
#include <random>

using namespace std;

int main() {
  default_random_engine engine{};
  // a
  uniform_int_distribution a{1, 2};
  // b
  uniform_int_distribution b{1, 100};
  // c
  uniform_int_distribution c{0, 9};
  // d
  uniform_int_distribution d{1000, 1112};
  // e
  uniform_int_distribution e{-1, 0};
  // f
  uniform_int_distribution f{-3, 11};

  return 0;
}