// #include <iostream>
// #include <format>
// #include <print>
// #include <algorithm>
// #include <random>
// #include <fstream>
// int main() {
//     std::default_random_engine rand{};
//     std::uniform_int_distribution distribution(1,1000);
//     if(std::ofstream ostream{"50ints.txt"}) {
//         for (int i{0}; i < 50; ++i) {
//             ostream << distribution(rand) << " ";
//         }
//     } else {
//         std::cout << "error";
//     }
//
//     return 0;
// }
