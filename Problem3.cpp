#include <iostream>
using namespace std;

int main()
{
  //variables
  int hoursWorked;
  float grossPay;

  //input from user
  cout << "Enter the amount of hours worked this week: ";
  cin >> hoursWorked;

  //if else statement if person worked overtime or not
  if (hoursWorked > 40){
    grossPay = (40 * 16) + ((hoursWorked - 40) * 24);
  }
  else{
    grossPay = hoursWorked * 16;
  }

  //calculations
  float socialSecurity = grossPay * 0.06;
  float federalIncome = grossPay * 0.14;
  float stateIncome = grossPay * 0.05;
  float netPay = grossPay - socialSecurity - federalIncome - stateIncome - 10;

  //output to console
  cout << "Your gross pay is: $" << grossPay << endl;
  cout << "Your social security tax is: $" << socialSecurity << endl;
  cout << "Your federal income tax is: $" << federalIncome << endl;
  cout << "Your state income tax is: $" << stateIncome << endl;
  cout << "Your medical insurance is $10" << endl;
  cout << "Your net pay is: $" << netPay << endl;

  return 0;
}
