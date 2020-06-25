#include <iostream>
#include <string>
using namespace std;

// Given int 0, 1, ..., 9, returns ASCII character '0', '1', ..., '9'.
char DigitToChar(int singleDigit) {
   char digitAsChar = '0';

   // We know 1's ASCII code is 1 more than 0's, 2's is 2 more, etc. So we initialize digitAsChar to 0's ASCII code.
   // Then we increase by the amount of the digit, so we add 0, 1, 2, etc.
   digitAsChar = digitAsChar + singleDigit;
   return digitAsChar;
}

// Assumes a non-negative userNum
string NumToStringWithCommas(int userNum) {
   int currNum;
   int currDigit;
   char currDigitAsChar;
   string numAsString;
   int posCount;

   currNum = userNum;
   posCount = 0; // Every 3, insert a comma
   while (currNum > 0) {
      if (posCount == 3) {
         numAsString.insert(numAsString.begin(), ',');
         posCount = 1; // 1 (not 0), because we're going to add a digit
      }
      else {
         ++posCount;
      }

      currDigit = currNum % 10; // Gets the rightmost digit. Ex: 569 % 10 is 9.
      currDigitAsChar = DigitToChar(currDigit); // Ex: 9 becomes character '9'
      numAsString.insert(numAsString.begin(), currDigitAsChar);
      currNum = currNum / 10;  // Shifts the number right one digit. Ex: 569 / 10 is 56.
   }

   if (userNum == 0) {  // 0 is a special case. Above loop never entered.
      numAsString = '0';
   }

   return numAsString;
}

/* NOTES

* This problem is surprisingly hard. As one develops the approach of using % to get each digit, the usefulness of a function
to convert a digit to a character becomes evident. So one may stop working on the higher level function, to work on this
lower level function. Once the lower-level function is fully tested, one can return to writing the higher-level function.

* Converting a digit to a character can be done in various ways. We chose to do integer addition, knowing ASCII codes
are integers. An alternative is to just have a large if-else statement: if (num == 0) { c = '0'; } else if ...

* Trying to handle the 0 case with the while loop is hard. We found it easier to just treat it as a special case.

*/


int main() {
   int userNum;

   cin >> userNum;

   cout << NumToStringWithCommas(userNum) << endl;

   return 0;
}