/***************************************
[Dynamic Double]
Author: [Rafael Pompa]
Date Completed: [3/4/2026]
Description: [This program will get a number from the user and will allow the user to double the value of the number as many times as they want. ]
***************************************/

#include <iostream>
using namespace std;

int* DoubleIt(int x)
{
return new int(x*2);
}

// Setting up the Variables
int main(){
int BeginnigValue;
char choice;

// Asking the user to pick a starting value
cout << "Enter the starting integer value: ";
cin >> BeginnigValue;

// Dynamically storing starting value
int currentValue = BeginnigValue;
cout << endl;

cout << "The current value is " << currentValue << endl << endl;

// Asking the user if they want to double their value
cout << "Would you like to double the value? (y = yes, n = no)\n";
cin >> choice;

// While the user pick y for yes, double  their value
while (choice == 'y'){
int* newValue = DoubleIt(currentValue);

currentValue = *newValue;

// Deleting their current value and replace in with the new value
delete newValue;

cout << endl;

// outputing the user update value
cout << "The current value is " << currentValue << endl << endl;
// Asking the user if they still want to double their value
cout << "Would you like to double the value? (y = yes, n = no)" << endl;
cin >> choice;
}

return 0;
}
