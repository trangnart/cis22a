#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userValues(10);
   int i;
   int curVal; // Improves code readability below
   vector<int> valCounts(100);
   int maxCount;
   int maxCountIndex;

   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }

   // valCounts vector was auto-initialized to all 0's. No need to explicitly initialize here
   for (i = 0; i < 10; ++i) {
      curVal = userValues.at(i);
      if ( (curVal < 0) || (curVal > 99) ) {
         cout << "Invalid input: " << curVal << " is not in 0-99" << endl;
         return 0;
      }

      ++valCounts.at(curVal);
   }

   maxCount = valCounts.at(0); // Max count seen so far
   maxCountIndex = 0;          // Index of max count seen so far
   for (i = 0; i < 100; ++i) {  // Note to 100, not 10
      if (valCounts.at(i) > maxCount) {
         maxCount = valCounts.at(i);
         maxCountIndex = i;
      }
   }

   cout << maxCountIndex << " " << maxCount << endl;

   return 0;
}