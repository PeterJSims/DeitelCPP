#include <format>
#include <iostream>

double average(const int *grades, size_t numberOfStudents);
// double average(const int grades[], size_t numberOfStudents);

int main() {
  int grades[]{100, 56, 86, 90};

  int size = sizeof(grades)/ sizeof(double);

  std::cout << average(grades, size);


  return 0;
}

double average(const int *grades, size_t numberOfStudents) {
  double total{0.0};

  for (size_t i{0}; i < numberOfStudents; ++i) {
    total += grades[i];
  }

  return total / numberOfStudents;
}

