#include <iostream>
using namespace std;

int main() {
    unsigned int sum{0};
    for (unsigned int i{1}; i <= 99; i += 2) {
        sum += i;
    }
    cout << sum;
    return 0;
}
