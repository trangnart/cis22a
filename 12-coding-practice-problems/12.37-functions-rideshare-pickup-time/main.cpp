#include <iostream>
using namespace std;


// All x, y coordinates are in miles from the origin 0, 0.
int PickupMinutes(int userX, int userY, int d1X, int d1Y, int d2X, int d2Y, int d3X, int d3Y) {

   // Finish this function

}


int main() {
   int userX, userY;
   int d1X, d1Y;
   int d2X, d2Y;
   int d3X, d3Y;

   cin >> userX;
   cin >> userY;
   cin >> d1X;
   cin >> d1Y;
   cin >> d2X;
   cin >> d2Y;
   cin >> d3X;
   cin >> d3Y;

   cout << PickupMinutes(userX, userY, d1X, d1Y, d2X, d2Y, d3X, d3Y) << endl;

   return 0;
}

