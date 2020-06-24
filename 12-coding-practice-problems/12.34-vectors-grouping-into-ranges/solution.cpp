#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<bool> chptList(16); // Valid chapters are 1-15. 1 means include, 0 exclude. Element 0 unused.
   bool includeChpt;
   bool atLeastOne = false;
   int i, j;

   // Get the chapter selections
   for (i = 1; i <= 15; ++i) {
      cin >> includeChpt;
      if (includeChpt) {
         chptList.at(i) = true;
      }
      else {
         chptList.at(i) = false;
      }
   }

   // Output the chapter selections, using ranges like 2-4 for ranges of 3-or-more
   for (i = 1; i <= 15; ++i) {  // Note: Loop body may advance i
      if (chptList.at(i)) { // Output this number
         cout << i; // Output this number, followed either by "-X " for a range that goes to X, else just " ".
         atLeastOne = true;
         if ( (i <= 13) &&  // Possible 3-or-more range
              (chptList.at(i + 1) && chptList.at(i + 2) )) { // 3-or-more range found. Note: Short-circuit evaluation important
            // Find end of range
            j = i + 2; // Last 1 seen so far in the range
            while ( (j <= 14) && (chptList.at(j + 1)) ) { // Range continues...  Note: Short-circuit evaluation important
               j += 1; // ...so extend the range
            }
            cout << "-" << j << " ";
            i = j; // Set i to end of range, so next for loop iteration will start at the next number
         }
         else {
            cout << " "; // No 3-or-more range, so just output a space after the number
         }
      }
   }
   if (!atLeastOne) { // No chapters were selected
      cout << "None ";
   }
   cout << endl;
   return 0;
}

/* NOTES

* This problem is hard. Breaking a hard problem into smaller steps is a common approach.

* Looking ahead in a vector is common. However, great care must be taken to NEVER access an invalid element.
  Hence the check for i <= 13 before looking ahead at elements i+1 and i+2, and the check for j <= 14 before looking
  ahead to element j+1.

* Both of those checks make use of short-circuit evaluation of &&. The terms for && are checked from left to right,
  and as soon as one is false, the checking stops (because all terms of && must be true, so if any false term is seen,
  then the result must be false). This stopping is important to avoid accessing an invalid element in the latter terms.

* Creating a boolean variable initialized to false and set to true in a loop, is a common pattern, to detect if at least
  one instance of something occurred.

* Drawing out the vector on paper, and tracing through by hand how you would output the numbers, is a good way to start.
  If a vector is too large (e.g., 100 chapters instead of 15), you might start with a managable size like 10; the algorithm
  is typically the same or very similar.

* This example "hardcoded" the size of the vector. A good next step would be to replace any instance of 15 by a constant
  like NUM_CHAPTERS, and replacing numbers like 13 and 14 by NUM_CHAPTERS - 2 and NUM_CHAPTERS - 1. But we hardcoded
  to make the program a bit simpler initially. Using hardcoded values initially, and then replacing with constants, is
  a common way to approach a harder problem like this one.

*/