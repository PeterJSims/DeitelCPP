#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double total{0.0};
    double count{0};
    const string directions{"Enter farenheit temperatures (from -212 to 212). Enter 999 to quit: "};

    cout << directions;

    double temperature;
    cin >> temperature;

    while (temperature != 999) {
        total += temperature;
        ++count;

        cout << directions;
        cin >> temperature;
    }

    const double avg{total / count};
    cout << "Average temperature: " << fixed << setprecision(2) << avg;


    return 0;
}
