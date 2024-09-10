#include <format>
#include <iostream>
struct Point{
  double x;
  double y;
  };
int main() {
  Point p{};
  p.x = .025;
  p.y = .45;
  std::cout << std::format("x:{} y:{}", p.x, p.y);
  return 0;
}