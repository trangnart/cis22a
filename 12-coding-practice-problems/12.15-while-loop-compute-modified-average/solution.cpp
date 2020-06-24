#include <iostream>
using namespace std;

int main() {

   int validSum = 0;
   int validNum = 0;
   int invalidNum = 0;
   int userInt = 0;
   double averageNum = 0.0;

   cin >> userInt;
   while (userInt != 0) {
      if ((userInt >= 2) && (userInt <= 12)) { // Valid
         validSum += userInt;
         validNum += 1;
      }
      else if (userInt != 0) { // Invalid
         invalidNum += 1;
      }
      else { // 0: Done
         // Do nothing. Looping will end.
      }
      cin >> userInt;
   }

   if (validNum > 0) { // Avoid dividing by 0
      averageNum = (static_cast <double> (validSum)) / validNum;
   }


   cout << "Average: " << averageNum << endl;
   cout << "Valid: " << validNum << endl;
   cout << "Invalid: " << invalidNum << endl;

   return 0;
}

/* NOTES:

* Getting input before a while loop and at the end of a loop is a common pattern when the number of input values is unknown

* A while loop is usually preferred when the number of iterations is not known beforehand

* A common error is to forget to get the next input, yielding an infinite loop

* A common error is to do: static_cast <double> (validSum / validNum),
  because the integer division will be done first. Ex: (10 / 4) will yield 2, not 2.5

* Division by 0 is undefined, yielding a runtime error. Thus, an if statement checks if validNum > 0.

*/