#include <format>
#include <iostream>
#include <sstream>


std::vector<std::string> splitString(const std::string& s) {
    std::vector<std::string> result{};
    std::istringstream stream(s);
    std::string temp;
    while (stream >> temp) {
        result.push_back(temp);
    }
    return result;
}

int main() {

    std::string input;
    while(getline(std::cin, input)) {
        auto s{splitString(input)};
        std::reverse(s.begin(), s.end());
        for (auto& basic_string : s) {
            std::cout << basic_string << " ";
        }
        std::cout << "\n";

    }

    return 0;
}
