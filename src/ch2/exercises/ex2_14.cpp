#include <iostream>

using namespace std;

int main() {
    int a{0}, b{0};
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // else not introduced yet

    if (a < b){
        cout << b << " is larger.";
    }
    if (a > b){
        cout << a << " is larger.";
    }
    if (a == b){
        cout << "These numbers are equal.";
    }

}