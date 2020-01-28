#include <iostream>
using namespace std;

int main()
{
  //stating variables
int capacity;
int attendance;

//input from user
cout << "Enter the max capacity of people the room can hold: ";
cin >> capacity;

cout << "Enter the amount of people attending the event: ";
cin >> attendance;


//if else statement that takes attendance and capacity and sees which is bigger, calculates the difference, and outputs to console
if (attendance > capacity){
  int excluded = attendance - capacity;
  cout << "The meeting cannot be held as planned due to fire regulations. The amount of people needed to be excluded is " << excluded << endl;
}
else{
  int additionalPeople = capacity - attendance;
  cout << "It is legal to hold the meeting. The amount of additional people that may legally attend are " << additionalPeople << endl;
}
return 0;
}
