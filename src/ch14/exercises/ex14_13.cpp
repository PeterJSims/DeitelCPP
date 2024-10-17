//
// Created by Peter Sims on 10/17/24.
//

#include <iostream>
#include <print>
#include <algorithm>


bool palindromeTester(const std::string& str) {

    std::string cleanedString{};
    for (const char c : str) {
        if (!ispunct(c) && !isspace(c)) {
            if (isupper(c)) {
                cleanedString.push_back(tolower(c));
            } else {
                cleanedString.push_back(c);
            }
        }
    }

    std::string reversedStr{cleanedString};
    std::ranges::reverse(reversedStr);
    return cleanedString == reversedStr;
}

int main() {
    // Question assumes it is all lowercase letters with no punctuation
    std::string palindrome{"rac.eca!r"};
    std::string palindrome2{"A man, a plan, a canal: Panama"};
    std::string palindrome3{"Madam, I'm Adam!"};
    std::string notPalindrome{"spacecar"};


    std::println("Is \'{}\' a palindrome: {}", palindrome, palindromeTester(palindrome));
    std::println("Is \'{}\' a palindrome: {}", palindrome2, palindromeTester(palindrome2));
    std::println("Is \'{}\' a palindrome: {}", palindrome3, palindromeTester(palindrome3));
    std::println("Is \'{}\' a palindrome: {}", notPalindrome, palindromeTester(notPalindrome));

    return 0;
}
