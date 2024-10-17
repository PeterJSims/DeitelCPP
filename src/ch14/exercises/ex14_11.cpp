//
// Created by Peter Sims on 10/17/24.
//

#include <iostream>
#include <print>
#include <algorithm>
#include <list>
int main() {
  std::list l1{1, 3, 5, 9};
  std::list l2{2,4,6,8};

  std::list<int> l3{};

  std::ranges::merge(l1, l2, std::back_inserter(l3));

  std::println("{:n}", l3);




  return 0;
}