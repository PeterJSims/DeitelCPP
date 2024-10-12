//
// Created by Peter Sims on 10/12/24.
//

#include <iostream>
#include <print>
#include <map>
#include <sstream>


/*
this is sample text with several words this is more sample text with some different words
 */
void makeLowercase(std::string& original) {
    for (char& c : original) {
        if (isupper(c)) {
            c = tolower(c);
        }
    }
}

std::map<std::string, int> getWordCountsFromString(const std::string& str) {
    std::map<std::string, int> wordCounts{};
    std::istringstream iss(str);
    std::string currentWord{};
    while(getline(iss, currentWord, ' ')) {
        makeLowercase(currentWord);
        if (currentWord == " ") continue;

        if(wordCounts.contains(currentWord)) {
            wordCounts[currentWord] += 1;
        } else {
            wordCounts[currentWord] = 1;
        }
    };

    return wordCounts;

}

void displayResults(const std::map<std::string, int>& results) {
    std::println("WORD\t\tCOUNT");
    for (auto [ word, count] : results) {
        std::println("{:<12}{}", word, count);
    }
    std::println("Number of unique words: {}", results.size());
}


int main() {
    std::string userInput{};
    getline(std::cin, userInput);
    const auto counts{getWordCountsFromString(userInput)};

    displayResults(counts);

    return 0;
}
