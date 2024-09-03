#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const string promptOne{"Enter hours worked (-1 to end): "};
  const string promptTwo{"Enter hourly rate of the employee: "};

  int hoursWorked;
  cout << fixed << setprecision(2) << promptOne;
  cin >> hoursWorked;

  while(hoursWorked != -1) {
    cout << promptTwo;
    double hourlyRate;
    cin >> hourlyRate;

    double salary{0.0};
    if (hoursWorked > 40) {
      salary += 40 * hourlyRate;
      hoursWorked -= 40;
      salary += hoursWorked * hourlyRate * 1.5;
    } else {
      salary += hoursWorked * hourlyRate;
    }
    cout << "Salary is $" << salary << "\n\n";

    cout << promptOne;
    cin >> hoursWorked;
  }
  return 0;
}