#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userValues(10);
   int i;
   int minVal;
   int maxVal;
   int sumVals;
   int curVal; // Just used for cleaner code below

   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }

   minVal = userValues.at(0); // Smallest seen so far
   maxVal = userValues.at(0); // Largest seen so far
   sumVals = 0;
   for (i = 0; i < 10; ++i) {
      curVal = userValues.at(i);

      if (curVal < minVal) { // Keep track of min
         minVal = curVal;
      }

      if (curVal > maxVal) { // Keep track of max
         maxVal = curVal;
      }

      sumVals += curVal; // Keep track of sum for computing average later
   }

   cout << minVal << " " << maxVal << " " << sumVals / 10.0 << endl;

   return 0;
}

/* NOTES

* A common error is initializing minVal to 0. That's wrong, because integers could be negative.
  When finding the min or max, you can just initialize to the first item, since that's the smallest
  and largest value seen so far.

* A common error is forgetting to perform floating-point division, instead doing integer division, when computing the
  average. Here, a floating-point output was required.

* Traversing a vector and computing some features about the elements (min, max, sum, average, etc.)
  is a common programming task.

*/