#include <format>
#include <iostream>


struct Part {
    int m_partNumber;
    std::string m_partName;
};

int main() {
    Part part{};
    std::array<Part, 10> parts{};

    std::cin >> part.m_partNumber >> part.m_partName;

    parts[3] = part;

    std::cout << parts[3].m_partNumber << " " << parts[3].m_partName;
    return 0;
}
