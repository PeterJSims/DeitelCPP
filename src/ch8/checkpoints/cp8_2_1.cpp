#include <format>
#include <iostream>



int main() {
  const std::string id1{"test"};
  std::string id2;
  id2.assign(id1);
  std::cout << id1 << " " << id2 << std::endl;
  return 0;
}