//
// Created by Peter Sims on 10/17/24.
//

#include <print>
#include <algorithm>


bool palindromeTester(const std::string& str) {
    std::string reversedStr{str};
    std::ranges::reverse(reversedStr);
    return str == reversedStr;
}

int main() {
    // Question assumes it is all lowercase letters with no punctuation
    std::string palindrome{"racecar"};
    std::string notPalindrome{"spacecar"};

    std::println("Is \'{}\' a palindrome: {}", palindrome, palindromeTester(palindrome));
    std::println("Is \'{}\' a palindrome: {}", notPalindrome, palindromeTester(notPalindrome));

    return 0;
}
