#include <format>
#include <iostream>
#include <span>

void cubeElements(std::span<int> nums) {
    for (int &num: nums) {
        num = num * num * num;
    }
}

void printElements(const std::span<const int> s) {
    for (const int &item: s) {
        std::cout << item << " ";
    }
    std::cout << "\n";
}

int main() {
    int values[]{1, 2, 3, 4, 5};
    std::array values2{6, 7, 8, 9, 10};
    std::vector values3{11, 12, 13, 14, 15};
    std::cout << "C-style array cubed: \n";
    printElements(values);
    cubeElements(values);
    printElements(values);
    std::cout << "C++ array cubed: \n";
    printElements(values2);
    cubeElements(values2);
    printElements(values2);
    std::cout << "C++ vector cubed: \n";
    printElements(values3);
    cubeElements(values3);
    printElements(values3);
    return 0;
}
