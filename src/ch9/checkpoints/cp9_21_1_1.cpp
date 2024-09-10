#include <format>
#include <iostream>
struct Point{
  double x;
  double y;
};
int main() {
  Point p{10,10};
  std::cout << std::format("x:{} y:{}", p.x, p.y);
  return 0;
}