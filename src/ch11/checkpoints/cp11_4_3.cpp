//
// Created by Peter Sims on 9/22/24.
//

#include <iostream>
#include <format>

int main() {
    const std::string* stringPointer{new std::string{}};


    delete stringPointer;

    return 0;
}
