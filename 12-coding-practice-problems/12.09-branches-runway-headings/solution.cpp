#include <iostream>
using namespace std;

int main() {
   int runwayNum;
   int runwayDeg;
   string runwayDirection;

   cin >> runwayNum;

   runwayDeg = runwayNum * 10;

   // Determine closest direction. Ranges are heading +/- 22.5.

   if ((runwayDeg > 0 - 22.5) && (runwayDeg < 0 + 22.5)) {
      runwayDirection = "north";
   }
   else if ((runwayDeg > 45 - 22.5) && (runwayDeg < 45 + 22.5)) {
      runwayDirection = "northeast";
   }
   else if ((runwayDeg > 90 - 22.5) && (runwayDeg < 90 + 22.5)) {
      runwayDirection = "east";
   }
   else if ((runwayDeg > 135 - 22.5) && (runwayDeg < 135 + 22.5)) {
      runwayDirection = "southeast";
   }
   else if ((runwayDeg > 180 - 22.5) && (runwayDeg < 180 + 22.5)) {
      runwayDirection = "south";
   }
   else if ((runwayDeg > 225 - 22.5) && (runwayDeg < 225 + 22.5)) {
      runwayDirection = "southwest";
   }
   else if ((runwayDeg > 270 - 22.5) && (runwayDeg < 270 + 22.5)) {
      runwayDirection = "west";
   }
   else if ((runwayDeg > 315 - 22.5) && (runwayDeg < 315 + 22.5)) {
      runwayDirection = "northwest";
   }

   cout << runwayDeg << " degrees (" << runwayDirection << ")" << endl;

   return 0;
}

/* NOTES:

* Breaking a problem into sub-problems is common. Here, the first problem is converting the two-digit number to
  degrees (by multiplying by 10) and outputing that item. The second is determining the direction, done using the if-else.

* Detecting if a value is in a range is common. The pattern is (x > 1) && (x < 10) to detect a value between 1 and 10.

* The program leaves the - 22.5 and + 22.5 to be clear, rather than doing the calculation.

* Having one output statement at the end is cleaner than having output statements on every branch. Better to update
  a string in each branch, and then output that string at the end.

* The comparisons of the integer and floating-point value is allowed. Note that integer runwayDegrees will never
  equal any of the range values, which always end with 0.5.

*/