#include <format>
#include <iostream>


class Account {
public:
    Account() = default;

    Account(const std::string& firstName, const std::string& lastName)
        : m_firstName{firstName},
          m_lastName{lastName} {
    }

    [[nodiscard]] std::string getFirstName() const {
        return m_firstName;
    }

    [[nodiscard]] std::string getLastName() const {
        return m_lastName;
    }

    void setFirstName(const std::string& firstName) {
        m_firstName = firstName;
    }

    void setLastName(const std::string& lastName) {
        m_lastName = lastName;
    }

private:
    std::string m_firstName;
    std::string m_lastName;
};

int main() {
    Account a;
    std::cout << a.getFirstName();
    a.setFirstName("Name");
    std::cout << a.getFirstName();
    return 0;
}
