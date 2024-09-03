#include <iostream>
#include <format>
#include <random>
using namespace std;

int main() {
    // random_device rd{}; // bad for performance
    // default_random_engine engine(rd());
    default_random_engine engine{};
    uniform_int_distribution coin{0, 1};

    int heads{0};
    int tails{0};
    for (int i{0}; i < 60'000'000; ++i) {
        switch (coin(engine)) {
            case 0:
                ++heads;
                break;
            case 1:
                ++tails;
                break;
            default:
                break;
        }
    }

    cout << format("{:<10}{:<10}\n", "heads", "tails");
    cout << format("{:<10}{:<10}", heads, tails);

    return 0;
}
