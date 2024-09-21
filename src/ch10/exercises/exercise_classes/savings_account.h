//
// Created by Peter Sims on 9/21/24.
//

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "account.h"


class SavingsAccount final : public Account {
public:
    SavingsAccount(const cpp_dec_float_50& balance, const cpp_dec_float_50& interest_rate);
    cpp_dec_float_50 calculateInterest() const;

    cpp_dec_float_50 getInterestRate() const;
    void setInterestRate(const cpp_dec_float_50& interest_rate);

private:
    cpp_dec_float_50 m_interestRate{};
};


#endif //SAVINGS_ACCOUNT_H
