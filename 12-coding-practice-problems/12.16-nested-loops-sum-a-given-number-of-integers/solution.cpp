#include <iostream>
using namespace std;

int main() {

   int numInts = 0;
   int intsSum = 0;
   int userInt = 0;
   int i;

   cin >> numInts;

   while (numInts > 0) {

      intsSum = 0;
      for (i = 0; i < numInts; ++i) {
         cin >> userInt;
         intsSum += userInt;
      }
      cout << intsSum << endl;

      cin >> numInts;
   }
   return 0;
}

/* NOTES

* Think of the outer loop separately from the inner loop. The outer loop uses "while" because the number of iterations
  is unknown. The inner loop uses "for" because the number of iterations is known to be numInts.

* A common error is to forget to get user input at the end of the while loop's body, yielding an infinite loop

*/