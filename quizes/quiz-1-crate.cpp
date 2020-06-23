// This program calculates the
// volume and cost of a crate
// of any size from user input

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // Constants for cost
   const double COST_PER_CUBIC_FOOT = 0.23;

   // Variables
    double length, width, height;   // The crate's dimensions
    double volume,   // The volume of the crate
           cost;     // The cost to build the crate

   // Set the desired output formatting for numbers.
   cout << setprecision(2) << fixed << showpoint;

   // Get Input Section: Prompt the user for the crate's length, width, and height
   cout << "What are the crate's dimensions (in feet)?:\n";
   cout << "Length: ";
   cin >> length;
   cout << "Width: ";
   cin >> width;
   cout << "Height: ";
   cin >> height;

   // Calculate Section: Calculate the crate's volume and the cost to produce it
   volume = length * width * height;
   cost = volume * COST_PER_CUBIC_FOOT;

   // Display Results Section: Display the calculated data.
   cout << "The volume of the crate is ";
   cout << volume << " cubic feet.\n";
   cout << "Cost to build: $" << cost << endl;

   return 0;
}
/*
 What are the crate's dimensions (in feet)?:
Length: 10
Width: 5
Height: 3

The volume of the crate is 150.00 cubic feet.
Cost to build: $34.50
 */