#include <iostream>

using namespace std;

int main() {
    // determine largest and smallest using just if statements
    int a{0}, b{0}, c{0}, d{0}, e{0};
    cout << "Enter five integers: ";
    cin >> a >> b >> c >> d >> e;

    int smallest{a};
    int largest{a};
    if (b < smallest){
        smallest = b;
    }
    if (c < smallest){
        smallest = c;
    }
    if (d < smallest){
        smallest = d;
    }
    if (e < smallest){
        smallest = e;
    }

    if (b > largest){
        largest = b;
    }
    if (c > largest){
        largest = c;
    }
    if (d > largest){
        largest = d;
    }
    if (e > largest){
        largest = e;
    }

    cout << "Smallest: " << smallest << "\n";
    cout << "Largest: " << largest << "\n";

}