#include <iostream>
#include <format>
using namespace std;

int main() {
    int fahrenheit{212};
    int celsius{100};

    cout << format("{} in Fahrenheit is equivalent to {} in Celsius", fahrenheit, celsius);

    return 0;
}
