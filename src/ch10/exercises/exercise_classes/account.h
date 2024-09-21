//
// Created by Peter Sims on 9/21/24.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <boost/multiprecision/cpp_dec_float.hpp>
using boost::multiprecision::cpp_dec_float_50;

class Account {
public:
    virtual ~Account() = default;
    explicit Account(const cpp_dec_float_50& balance);
    cpp_dec_float_50 getBalance() const;
    void setBalance(const cpp_dec_float_50& balance);
    virtual bool deposit(const cpp_dec_float_50& amount);
    virtual bool withdraw(const cpp_dec_float_50& amount);

private:
    cpp_dec_float_50 m_balance;
};


#endif //ACCOUNT_H
