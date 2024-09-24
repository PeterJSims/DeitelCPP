//
// Created by Peter Sims on 9/21/24.
//

#include <iostream>
#include "exercise_classes/checking_account.h"
#include "exercise_classes/savings_account.h"

int main() {
    std::vector<Account*> accounts{};
    accounts.push_back(new SavingsAccount{70'000, .05});
    accounts.push_back(new SavingsAccount{50'000, .09});
    accounts.push_back(new SavingsAccount{100'000, .06});
    accounts.push_back(new CheckingAccount{70'000, 10});
    accounts.push_back(new CheckingAccount{230'000, 9});


    for (const auto account : accounts) {
        cpp_dec_float_50 withdrawAmount;
        cpp_dec_float_50 depositAmount;
        std::cout << "Current balance: " << account->getBalance() << "\n";
        std::cout << "How much would you like to withdraw: ";
        std::cin >> withdrawAmount;
        std::cout << "How much would you like to deposit: ";
        std::cin >> depositAmount;
        std::cout << "Processing withdraw/deposit...\n";
        account->withdraw(withdrawAmount);
        account->deposit(depositAmount);
        std::cout << "Balance after transactions: " << account->getBalance() << "\n\n";
    }


    for (auto account : accounts) {
        delete account;
    }

    return 0;
}
