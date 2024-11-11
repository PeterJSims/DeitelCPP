//
// Created by Peter Sims on 11/11/24.
//

#include <iostream>
#include <format>
#include <print>
#include <iomanip>

int main() {
    // a
    std::cout << "Enter your name: \n";

    // b
    std::cout << std::uppercase << std::showbase << std::hex << 443 << '\n';
    std::cout << std::nouppercase;

    // c
    char* word{"hello"};
    std::cout << static_cast<void*>(word) << '\n';

    // d
    std::cout << std::scientific << 12.3212 << '\n';

    // e
    int x{42};
    int* intPtr{&x};
    std::cout << intPtr << '\n';

    // f
    std::cout << std::showbase << 0x43 << '\n';
    std::cout << std::noshowbase << std::setbase(10);

    // g
    float y{42.0001};
    float* floatPtr{&y};
    std::cout << *floatPtr << '\n';

    // h
    std::cout.fill('*');
    std::cout << std::setw(10);
    std::cout << "HI\n";
    std::cout << std::setfill('+');
    std::cout << std::setw(10) << "HI\n";
    std::cout << std::setfill(' ');

    // i
    std::cout.put('0').put('K').put('\n');

    // j
    // std::cin.peek();

    // k
    // char charValue = std::cin.get();
    // std::cin.get(charValue);
    // std::cout << charValue << '\n';

    // l
    // std::cin.ignore(6);

    // m
    // char line[51];
    // std::cin.read(line, 50);

    // n
    // char name[10]{};
    // std::cin.get(name, 10, '.');
    // std::cin.getline(name, 10, '.');

    // o
    // std::cout.write(line,std::cin.gcount());

    // p
    std::cout << 124 << " " << std::fixed << std::setprecision(3) << 18.376 << " " << 'Z' << " " << "String\n";

    // q
    std::cout << std::cout.precision() << '\n';

    // r
    int months{};
    float percentageRate{};
    // std::cin >> months >> percentageRate;

    // s
    std::cout << std::setprecision(3) << 1.92 << " " << 1.925 << " " << 1.9258 << "\n";

    // t
    std::cout << std::oct << 100 << '\t' << std::hex << 100 << '\t' << std::dec << 100 << '\n';

    // u
    std::cout << std::setbase(8) << 100 << '\t' << std::setbase(16) << 100 << '\t' << std::setbase(10) << 100 << '\n';

    // v
    std::cout << std::setw(10) << 1234 << '\n';

    // w
    // char line[30]{};
    // std::cin.get(line, 20, 'z');

    // x

    int x1{6};
    int y1{4};
    std::cout << std::setw(x1) << std::setprecision(y1) << 87.4573;

    return 0;
}
