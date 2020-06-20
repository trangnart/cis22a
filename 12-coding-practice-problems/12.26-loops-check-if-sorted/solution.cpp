#include <iostream>
using namespace std;

int main() {
   int size,
       currentNum,
       previousNum = 0;

   cin >> size;                     // the first element is the size

   for ( int i = 0; i < size; ++i ) {
      cin >> currentNum;            // store current number
      if (i == 0) {
         previousNum = currentNum;  // save this number
         continue;
      }
      if (previousNum >= currentNum) {
         cout << "Unsorted\n";      // break if out of order
         return 1;
      }
      previousNum = currentNum;
   }
   cout << "Sorted\n";

   return 0;
}