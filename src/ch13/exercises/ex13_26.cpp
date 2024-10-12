//
// Created by Peter Sims on 10/12/24.
//

#include <iostream>
#include <map>
#include <print>


/*
 This is my sample sentence. It contains words, punctuation, and spaces. I'm ArbitRarily capitaliZing as well.
 */

std::map<char, int> getCharCountMap(const std::string& str) {
    std::map<char, int> counts{};

    for (const char c : str) {
        if (isalpha(c)) {
            if (counts.contains(c)) {
                counts[c] += 1;
            } else {
                counts[c] = 1;
            }
        }
    }
    return counts;
}

void displayResults(const std::map<char, int>& results) {
    std::println("CHAR\tCOUNT");
    for (auto [c, count] : results) {
        std::println("{:<8}{}", c, count);
    }
    std::println("Number of unique characters: {}", results.size());
}

int main() {

    std::string s{};
    getline(std::cin, s);
    const auto charMap{getCharCountMap(s)};

    displayResults(charMap);

    return 0;
}
