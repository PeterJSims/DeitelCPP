#include <format>
#include <iostream>
struct Point{
  double x;
  double y;
};
int main() {
  Point p{.x{10}};
  std::cout << p.x << " " << p.y;
  return 0;
}