#include <iostream>
using namespace std;

int main()
{
  //creating variables
  float weight;
  float ton = 35273.92;

  //inputing from the console
  cout << "Enter the weight of the cereal in ounces: ";
  cin >> weight;

  //calculations
  float metricWeight = weight/ton;
  float boxes = ton/weight;

  //outputting to the console
  cout << "The weight in metric tons of the cereal is "  << metricWeight << endl;
  cout << "The amount of boxes of cereal needed to have a metric ton of cereal would be " << boxes << " boxes" << endl;

  return 0;
}
