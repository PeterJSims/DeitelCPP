#include <format>
#include <iostream>
#include "exercise_classes/Account.h"

int main() {
  Account account1{"Mia Gonzalez", 50.00};
  Account account2{"Asahi Susuki", -7.00};

  // display initial balance of each object
  std::cout << std::format("account1: {} balance is ${:.2f}\n",
     account1.getName(), account1.getBalance());

  std::cout << "Enter amount to withdraw from account1: "; // prompt
  double amount;
  std::cin >> amount; // obtain user input
  std::cout << std::format(
     "withdrawing ${:.2f} from account1 balance\n\n", amount);
  account1.withdraw(amount); // add to account1's balance

  // display balances
  std::cout << std::format("account1: {} balance is ${:.2f}\n",
     account1.getName(), account1.getBalance());

  return 0;
}