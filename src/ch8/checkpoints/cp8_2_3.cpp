#include <format>
#include <iostream>


int main() {
    for (const std::string my_string{"testString"}; const auto c: my_string) {
        std::cout << c << " ";
    }
    return 0;
}
