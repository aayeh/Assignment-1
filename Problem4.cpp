#include <iostream>
using namespace std;

int main()
{
  //creating variables
  float cost;
  int years;
  float inflation;

  //asking for user input
  cout << "Enter the price of the item: ";
  cin >> cost;

  cout << "Enter the number of years from now that the item will be purchased: ";
  cin >> years;

  cout << "Enter the rate of inflation (in percentage): ";
  cin >> inflation;

  //calculation
  float decimalInflation = inflation / 100;
  for (int i = 0; i < years; ++i){
    cost = cost + (cost * decimalInflation);
  }

  //output to console
  cout << "The price of the item " << years << " years from now will be " << cost << endl;
  
  return 0;
}
