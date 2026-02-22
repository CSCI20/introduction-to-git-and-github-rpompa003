/***************************************
Cubic Objects
Author: [Rafael pompa]
Date Completed: [2/4/2026]
Description: [this program is used to input user data Cuboid lenght, width, and height to calculate the total Cuboid Volume.]
***************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Custom data type definition "Cubiod"
struct Cuboid {
//SEtting up the Cubiod Varables
int length;
int width;
int height;

//function that calculates and returns the Cuboid volume
int volume(){
return length * width * height;
}
};

//define a non-member function that builds a cuboid odjecct based of the user input
Cuboid buildCuboidFromUserInput(int cuboidNumber){

//creating a cuboid to store the user inputs
Cuboid object;

//outputing what cuboid the unser inputs is going to
cout << "Cuboid " << cuboidNumber << ":\n";

//asking for the user cuboid inputs and storing them in the cubiod object
cout << "Enter the length:\n";
cin >> object.length;

//asking for the user cuboid inputs and storing them in the cubiod object
cout << "Enter the width:\n";
cin >> object.width;

//asking for the user cuboid inputs and storing them in the cubiod object
cout << "Enter the height:\n";
cin >> object.height;

cout << "\n";

return object;
}

int main()
{

//instantiating two "Cuboid" objects and use the "buildCuboidFromUserInput" function to assign them values
Cuboid cuboid1 = buildCuboidFromUserInput(1);
Cuboid cuboid2 = buildCuboidFromUserInput(2);

//Displaing the volume of both Coboids
cout << "Cuboid 1 Volume: " << cuboid1.volume() << endl;
cout << "Cuboid 2 Volume: " << cuboid2.volume() << endl;

return 0;
}