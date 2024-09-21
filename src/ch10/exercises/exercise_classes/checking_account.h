//
// Created by Peter Sims on 9/21/24.
//

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "account.h"


class CheckingAccount final : public Account {
public:
    explicit CheckingAccount(const cpp_dec_float_50& balance, const cpp_dec_float_50& fee);
    bool deposit(const cpp_dec_float_50& amount) override;
    bool withdraw(const cpp_dec_float_50& amount) override;

    cpp_dec_float_50 getFeePerTransaction() const;
    void setFeePerTransaction(const cpp_dec_float_50& fee_per_transaction);

private:
    cpp_dec_float_50 m_feePerTransaction{};
};


#endif //CHECKING_ACCOUNT_H
