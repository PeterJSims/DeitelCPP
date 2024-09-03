#include <iostream>

using namespace std;

int main() {
    unsigned int power{2};
    unsigned int exp{1};

    while (power <= 1'000'000) {
        power *= 2;
        ++exp;
    }

    cout << power << " = " << "2^" << exp << "\n";

    return 0;
}
