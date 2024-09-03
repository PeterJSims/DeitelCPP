#include <format>
#include <iostream>


int main() {
    std::string input;
    while (std::cin >> input) {
        if (input.ends_with('r') || input.ends_with("ay")) {
            std::cout << input << "\n";
        }
    }
    return 0;
}
