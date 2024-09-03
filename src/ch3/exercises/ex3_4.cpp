#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int accountNumber;
    cout << fixed << setprecision(2) << "Enter account number (or -1 to quit): ";
    cin >> accountNumber;

    while (accountNumber != -1) {
        double balance, charges, credits, limit;

        cout << "Enter beginning balance: ";
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charges;
        cout << "Enter total credits: ";
        cin >> credits;
        cout << "Enter credit limit: ";
        cin >> limit;

        balance = balance + charges - credits;

        if (balance > limit) {
            cout << "Account:      " << accountNumber << "\n";
            cout << "Credit limit: " << limit << "\n";
            cout << "Balance:      " << balance << "\n";
            cout << "Credit Limit Exceeded.\n";
        } else {
            cout << "New balance is " << balance << "\n";
        }
        cout << "\n";


        cout << "Enter account number (or -1 to quit): ";
        cin >> accountNumber;
    }

    return 0;
}
