#include <iostream>
using namespace std;

int main() {
   int listSize;
   int currNum = 0, prevNum = 0;
   bool isSorted;
   int i;

   cin >> listSize;

   isSorted = true; // Assume sorted, until find a violation
   for (i = 0; i < listSize; ++i) {
      prevNum = currNum;
      cin >> currNum;
      if (i > 0) { // Only check for ascending if this isn't the first item
         if (!(currNum > prevNum)) { // Check is ascending property is not violated
            isSorted = false; // All it takes is one violation for the entire list to not be sorted
         }
      }
   }

   if (isSorted) {
      cout << "Sorted" << endl;
   }
   else {
      cout << "Unsorted" << endl;
   }

   return 0;
}


/* NOTES

* The expression !(currNum > prevNum) was used instead of the equivalent expression (currNum <= prevNum), because we
  felt it more directly matched the intuitive logic: If the numbers are NOT ascending, the list isn't sorted.

* A common error is to use an if-else in the loop, setting isSorted with false if the current pair is not ascending,
  and with true otherwise. That setting with true is wrong. We are looking for a single violation; if one occurs,
  the entire list is not sorted, so the variable should stay false, no matter what is seen later.

*/
