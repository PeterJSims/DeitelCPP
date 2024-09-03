#include <format>
#include <iostream>
#include <random>


constexpr std::array articles{"A", "The"};
constexpr std::array lowerArticles{"a", "the"};

constexpr std::array nouns{"bird", "cat", "dog", "fox", "wolf", "frog"};
constexpr std::array verbs{"follows", "stares", "smells", "hears", "sees", "taunts"};
constexpr std::array preposition{"by", "in front of", "near", "around", "close to", "away from"};


int main() {
    constexpr int count{20};

    std::default_random_engine engine{1};
    std::uniform_int_distribution<int> range{0, 6};

    for (int i{0}; i < count; ++i) {
        std::cout << std::format("{} {} {} {} {} {}.\n",
            articles[range(engine) % 2],
            nouns[range(engine)],
            verbs[range(engine)],
            preposition[range(engine)],
            lowerArticles[range(engine) % 2],
            nouns[range(engine)]);
    }
    return 0;
}
