#include <algorithm>
#include <iostream>


int main() {
    int nums[]{2, 3, 1, 9, -1};
    std::sort(std::begin(nums), std::end(nums));
    for (int i{0}; i < 5; ++i) {
        std::cout << nums[i] << " ";
    }
    return 0;
}
