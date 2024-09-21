//
// Created by Peter Sims on 9/21/24.
//

#include "account.h"

Account::Account(const cpp_dec_float_50& balance): m_balance(balance) {
    if (balance < 0) {
        throw std::invalid_argument("Balance cannot start at a negative value");
    }
    setBalance(balance);
}

cpp_dec_float_50 Account::getBalance() const {
    return m_balance;
}

void Account::setBalance(const cpp_dec_float_50& balance) {
    if (balance < 0) {
        m_balance = 0;
    } else {
        m_balance = balance;
    }
}

bool Account::deposit(const cpp_dec_float_50& amount) {
    if (amount < 0) {
        throw std::invalid_argument("Cannot deposit a negative amount");
    }
    m_balance += amount;
    return true;
}

bool Account::withdraw(const cpp_dec_float_50& amount) {
    if (amount > getBalance()) {
        throw std::invalid_argument("Cannot withdraw more than the balance");
    }
    m_balance -= amount;
    return true;
}
