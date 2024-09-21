//
// Created by Peter Sims on 9/21/24.
//

#include <iostream>
#include "exercise_classes/account.h"
#include "exercise_classes/savings_account.h"
#include "exercise_classes/checking_account.h"

int main() {
    Account acc{100};
    std::cout << acc.getBalance() << "\n";
    acc.deposit(40);
    std::cout << acc.getBalance() << "\n";
    acc.withdraw(55.23);
    std::cout << acc.getBalance() << "\n";

    SavingsAccount acc2{100, .05};
    try {
        acc2.setInterestRate(-4);
    } catch (...) {
        std::cout << "Error caught\n";
    };

    std::cout << acc2.calculateInterest() << "\n";


    CheckingAccount acc3{300, 3};
    acc3.withdraw(30);
    std::cout << acc3.getBalance() << "\n";
    acc3.deposit(30);
    std::cout << acc3.getBalance() << "\n";
    acc3.withdraw(30000);
    return 0;
}
