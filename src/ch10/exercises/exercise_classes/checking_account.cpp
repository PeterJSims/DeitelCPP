//
// Created by Peter Sims on 9/21/24.
//

#include "checking_account.h"

CheckingAccount::CheckingAccount(const cpp_dec_float_50& balance, const cpp_dec_float_50& fee): Account(balance),
    m_feePerTransaction(fee) {
    setFeePerTransaction(fee);
}

bool CheckingAccount::deposit(const cpp_dec_float_50& amount) {
    if (Account::deposit(amount)) {
        setBalance(getBalance() - m_feePerTransaction);
        return true;
    }
    return false;
}

bool CheckingAccount::withdraw(const cpp_dec_float_50& amount) {
    if (Account::withdraw(amount)) {
        setBalance(getBalance() - m_feePerTransaction);
        return true;
    }
    return false;
}

cpp_dec_float_50 CheckingAccount::getFeePerTransaction() const {
    return m_feePerTransaction;
}

void CheckingAccount::setFeePerTransaction(const cpp_dec_float_50& fee_per_transaction) {
    m_feePerTransaction = fee_per_transaction;
}
