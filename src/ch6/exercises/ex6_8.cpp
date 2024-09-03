#include <format>
#include <iostream>


// 30 43 23 23 40 95 40 20 10 2 34 54 234 42 23 24 5 11 29 30
// Unique entries:
// 30 43 23 40 95 20 10 34 54 42 24 11 29

int main() {
    constexpr int n{20};
    std::vector<int> entries{};

    for (int i{0}; i < n; ++i) {
        int num;
        std::cin >> num;
        bool found = false;
        for (int j{0}; j < entries.size(); ++j) {

            if (entries[j] == num) {
                found = true;
            }
        }
        if (num >= 10 && num <= 100 and !found) {
            entries.push_back(num);
        }
    }

    std::cout << "Unique entries: \n";
    for (size_t i{0}; i < entries.size(); ++i) {
        if (entries[i] != 0) {
            std::cout << entries[i] << " ";
        }
    }
    return 0;
}
