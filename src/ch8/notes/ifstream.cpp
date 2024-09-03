#include <cstdlib>
#include <format>
#include <fstream> // file stream
#include <iostream>
#include <string>

int main() {
    // ifstream opens the file
    // if (std::ifstream input{"clients.txt", std::ios::in}) {
    if (std::ifstream input{"clients.txt"}) {
        std::cout << std::format("{:<10}{:<13}{:>7}\n",
                                 "Account", "Name", "Balance");

        int account;
        std::string name;
        double balance;

        // display each record in file
        while (input >> account >> name >> balance) {
            std::cout << std::format("{:<10}{:<13}{:>7.2f}\n",
                                     account, name, balance);
        }
    } else {
        std::cerr << "File could not be opened\n";
        std::exit(EXIT_FAILURE);
    }
}
