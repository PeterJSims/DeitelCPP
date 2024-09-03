#include <format>
#include <iostream>

using namespace std;
// vectors/arrays not introduced, thus not able to solve via Sieve of Erastothenes

bool isPrime(const int n) {
    if (n <= 1) { return false; }

    for (int i{2}; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPrimeOptimized(const int n) {
    if (n <= 1) return false;
    for (int i{2}; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    constexpr int n{10'000};

    // for (int i{2}; i <= n; ++i) {
    //     if (isPrimeOptimized(i)) {
    //         cout << i << "\n";
    //     }
    // }

    cout << 2 << "\n";
    for (int i{3}; i <= n; i += 2) {
        if (isPrimeOptimized(i)) {
            cout << i << "\n";
        }
    }
    return 0;
}
