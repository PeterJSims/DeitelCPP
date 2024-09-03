#include <format>
#include <iostream>


int main() {
    std::string s;
    while (std::cin >> s) {
        if (s.ends_with("ed")) {
            std::cout << s << "\n";
        }
    }
    return 0;
}
