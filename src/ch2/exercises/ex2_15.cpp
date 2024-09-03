#include <iostream>

using namespace std;

int main() {

    int x{0}, y{0}, z{0};
    cout << "input three different integers: ";

    cin >> x >> y >> z;

    int sum{x + y + z};
    double avg{(x * 1.0 + y + z) / 3.0};
    int product{x * y * z};

    int smallest{x};
    int largest{x};
    if (y < smallest){
        smallest = y;
    }
    if (z < smallest){
        smallest = z;
    }
    if (y > largest){
        largest = y;
    }
    if (z > largest){
        largest = z;
    }

    cout << "Sum is " << sum << "\n";
    cout << "Average is " << avg << "\n";
    cout << "Product is " << product << "\n";
    cout << "Smallest is " << smallest << "\n";
    cout << "Largest is " << largest << "\n";

}