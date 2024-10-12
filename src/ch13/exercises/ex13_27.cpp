//
// Created by Peter Sims on 10/12/24.
//

#include <iostream>
#include <print>
#include <set>
#include <sstream>

void makeLowercase(std::string& original) {
    for (char& c : original) {
        if (isupper(c)) {
            c = tolower(c);
        }
    }
}

std::set<std::string> getUniqueWords(const std::string& s) {
    std::set<std::string> uniqueWords{};
    std::istringstream iss{s};
    std::string currentWord{};
    while (getline(iss, currentWord, ' ')) {
        makeLowercase(currentWord);
        uniqueWords.insert(currentWord);
    }
    uniqueWords.erase("");

    return uniqueWords;
}

int main() {
    std::println("Enter sentences to get all the unique words out of it:");

    std::string currentString{};
    while (getline(std::cin, currentString)) {
        auto uniqueWords{getUniqueWords(currentString)};
        std::println("{:n}", uniqueWords);
    }
    return 0;
}
