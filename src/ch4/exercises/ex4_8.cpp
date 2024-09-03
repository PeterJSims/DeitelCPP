#include <iostream>

using namespace std;

int main() {
    unsigned int n{15};
    int product{1};
    for (int i{1}; i <= n; i += 2) {
        product *= i;
        cout << product << "\n";
    }
    cout << product;

    return 0;
}
