#include <iostream>
#include <math.h>
using namespace std;

int main() {
   char c;
   double x1, y1, x2, y2;
   double distPoints;

   // Input format: (x1,y1) (x2,y2)
   cin >> c; // Skip (
   cin >> x1;
   cin >> c; // Skip ,
   cin >> y1;
   cin >> c; // Skip )
   cin >> c; // Skip (
   cin >> x2;
   cin >> c; // Skip ,
   cin >> y2;

   distPoints = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );

   cout << distPoints << endl;

   return 0;
}

/* NOTES

* Using math functions can greatly simplify code. sqrt and pow are common. Power of 2 (squaring) can also be done
  just by multiplying an item by itself, as in num * num.

* The distance formula works in three dimensions too, just be appending + pow(z2-z1, 2) within the square root.

* Reading in characters and numbers in combination is commonplace. A more robust program would check that
  parentheses and commas were correctly placed.

*/