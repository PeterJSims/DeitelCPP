#include <format>
#include <iostream>
#include <regex>


int main() {
    std::regex rgex{"[b-df-hj-np-tv-z]"};
    std::string testOne{"aeiou"};
    std::string testTwo{"aecou"};

    std::cout << std::format("{}\n", std::regex_match(testOne, rgex));
    std::cout << std::format("{}\n", std::regex_match(testTwo, rgex));


    return 0;
}
