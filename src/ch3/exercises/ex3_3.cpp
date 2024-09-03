#include <iostream>

using namespace std;

int main() {
    double totalMiles{0.0};
    double currentTripMiles{0.0};
    double totalGallons{0.0};
    double currentTripGallons{0.0};
    const string promptOne{"Enter miles driven (-1 to quit): "};
    const string promptTwo{"Enter gallons used: "};
    cout << promptOne << fixed;
    cin >> currentTripMiles;


    while (currentTripMiles != -1) {
        cout << promptTwo;
        cin >> currentTripGallons;

        totalMiles += currentTripMiles;
        totalGallons += currentTripGallons;
        cout << "MPG this trip: " << (currentTripMiles / currentTripGallons) << "\n";
        cout << "Total MPG: " << (totalMiles / totalGallons) << "\n\n";

        cout << promptOne;
        cin >> currentTripMiles;
    }

    return 0;
}
