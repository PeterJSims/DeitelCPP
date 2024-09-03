#include <cstdlib> // exit function prototype
#include <format>
#include <fstream> // contains file stream processing types
#include <iostream>
#include <string>

/*
100 Devi 24.98
200 Taylor 345.67
300 Huber 0.00
400 Karimov -42.16
500 Sosa 224.62
*/
int main() {
    // ofstream opens the file
    // if (std::ofstream output{"clients.txt", std::ios::out}) {
    if (std::ofstream output{"clients.txt"}) {
        //std::ios::out is the default for the second argument above
        std::cout << "Enter the account, name, and balance.\n"
                << "Enter end-of-file to end input.\n? ";

        int account;
        std::string name;
        double balance;

        // read account, name and balance from cin, then place in file
        while (std::cin >> account >> name >> balance) {
            output << std::format("{} {} {}\n", account, name, balance);
            std::cout << "? ";
        }
    } else {
        std::cerr << "File could not be opened\n";
        std::exit(EXIT_FAILURE);
    }
}
