#include <format>
#include <iostream>

class Account {
public:
    Account(const std::string& first, const std::string& last): m_firstName(first), m_lastName(last) {
    }

    std::string m_firstName;
    std::string m_lastName;
};


int main() {
    Account account{"Test", "Two"};
    std::cout << account.m_lastName;
    return 0;
}
