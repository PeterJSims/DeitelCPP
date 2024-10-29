//
// Created by Peter Sims on 10/29/24.
//

#include <iostream>
#include <print>

template <typename T>
bool isEqualTo(T one, T two) {
  return one == two;
}

struct Thing {
  int x;
  int y;
};

struct ThingWithEquals {
  int x;
  int y;

  friend bool operator==(const ThingWithEquals& lhs, const ThingWithEquals& rhs) {
    return lhs.x == rhs.x
      && lhs.y == rhs.y;
  }

  friend bool operator!=(const ThingWithEquals& lhs, const ThingWithEquals& rhs) {
    return !(lhs == rhs);
  }
};

int main() {
  int intX{3};
  int intY{3};
  int intZ{4};
  std::println("{}", isEqualTo(intX, intY));
  std::println("{}", isEqualTo(intX, intZ));


  Thing t1{3, 4};
  Thing t2{3, 55};
  // std::println("{}", isEqualTo(t1, t2));  // invalid operands to binary expression ('Thing' and 'Thing')
  ThingWithEquals twe1{3, 4};
  ThingWithEquals twe2{3, 4};
  std::println("{}", isEqualTo(twe1, twe2));

  return 0;
}