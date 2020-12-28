#include <iostream>
using namespace std;

int absVal(int a) {
   if (a < 0) {
      return -a;
   }
   else {
      return a;
   }
}

// All x, y coordinates are in miles from the origin 0, 0.
int PickupMinutes(int userX, int userY, int d1X, int d1Y, int d2X, int d2Y, int d3X, int d3Y) {
   int dist1;
   int dist2;
   int dist3;
   int minDist;

   // Compute distances
   dist1 = absVal(userX - d1X) + absVal(userY - d1Y);
   dist2 = absVal(userX - d2X) + absVal(userY - d2Y);
   dist3 = absVal(userX - d3X) + absVal(userY - d3Y);

   // Determine minimum distance
   minDist = dist1;
   if (dist2 < minDist) {
      minDist = dist2;
   }
   if (dist3 < minDist) {
      minDist = dist3;
   }

   // Calculate and return time (2 min per mile)
   return 2 * minDist;
}

/* NOTES

* Breaking the problem into three parts greatly simplifies the logic.

* Computing the minimum (or maximum) of a few variables is a common pattern. Note the use of several if statements.
  An if-else statement would be wrong.

* A programmer almost certainly will use copy-paste in this code. Programmers should be VERY alert to ensure to change
  all variables appropriately. A common error is forget to change a variable, like d1X instead of d2X.

*/


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

