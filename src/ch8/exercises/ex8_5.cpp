#include <format>
#include <iostream>
#include <sstream>

std::vector<std::string> splitString(const std::string& s) {
    std::cout << "SPLITTING\n";

    std::vector<std::string> result{};
    std::istringstream stream(s);
    std::string temp;
    while (stream >> temp) {
        result.push_back(temp);
    }
    return result;
}

std::string pigLatinize(const std::string& s) {
    if (s.size() <= 1) {
        return s;
    }
    std::string result{};

    if (std::string("AEIOUaeiou").contains(s[0])) {
        result = s + "ay";
    }
    else {
        result = s.substr(1) + static_cast<char>(tolower(s[0])) + "ay";
        if (isupper(s[0])) {
            result = static_cast<char>(toupper(result[0])) + result.substr(1);
        }
    }
    return result;
}

int main() {
    std::string input;
    while (getline(std::cin, input)) {
        for (auto split{splitString(input)}; auto& s : split) {
            std::cout << pigLatinize(s) << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    return 0;
}
