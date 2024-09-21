//
// Created by Peter Sims on 9/21/24.
//

#include "savings_account.h"

SavingsAccount::SavingsAccount(const cpp_dec_float_50& balance, const cpp_dec_float_50& interest_rate): Account(balance),
    m_interestRate(interest_rate) {
    setInterestRate(interest_rate);
}

cpp_dec_float_50 SavingsAccount::calculateInterest() const {
    return getBalance() * m_interestRate;
}

cpp_dec_float_50 SavingsAccount::getInterestRate() const {
    return m_interestRate;
}

void SavingsAccount::setInterestRate(const cpp_dec_float_50& interest_rate) {
    if (interest_rate < 0) {
        throw std::invalid_argument("Interest rate cannot be a negative value");
    }
    m_interestRate = interest_rate;
}
