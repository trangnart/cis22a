#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<bool> chptList(16); // Valid chapters are 1-15. 1 means include, 0 exclude. Element 0 unused.
   bool includeChpt;
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


   /* Type your code here. */

   return 0;
}