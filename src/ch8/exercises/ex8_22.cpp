#include <format>
#include <iostream>
#include <regex>


int main() {
    std::string substr;
    std::cout << "What substring will be looked for?";
    std::cin >> substr;
    const std::regex reg{"^" + substr};

    std::string word;
    while (std::cin >> word) {
        if (std::regex_search(word, reg)) {
            std::cout << word << "\n";
        }
    }
    return 0;
}
