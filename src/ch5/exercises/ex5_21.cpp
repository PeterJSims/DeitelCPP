#include <format>
#include <iostream>
#include <random>
using namespace std;

int flip() {
    static default_random_engine engine{};
    static uniform_int_distribution coin{0, 1};
    return coin(engine);
}

int main() {
    constexpr int n{10'000};
    int heads{0};
    for (int i{0}; i < n; ++i) {
        heads += flip();
    }
    cout << format("{}{:>10}\n", "HEADS", "TAILS");
    cout << format("{}{:>10}\n", heads, n - heads);


    return 0;
}
