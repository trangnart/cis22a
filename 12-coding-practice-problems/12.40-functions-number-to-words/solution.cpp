#include <iostream>
#include <string>
using namespace std;

string DigitToWord(int digitIn) {
   string wordOut;

   if (digitIn == 0) {
      wordOut = "zero";
   }
   else if (digitIn == 1) {
      wordOut = "one";
   }
   else if (digitIn == 2) {
      wordOut = "two";
   }
   else if (digitIn == 3) {
      wordOut = "three";
   }
   else if (digitIn == 4) {
      wordOut = "four";
   }
   else if (digitIn == 5) {
      wordOut = "five";
   }
   else if (digitIn == 6) {
      wordOut = "six";
   }
   else if (digitIn == 7) {
      wordOut = "seven";
   }
   else if (digitIn == 8) {
      wordOut = "eight";
   }
   else if (digitIn == 9) {
      wordOut = "nine";
   }
   else {
      wordOut = "error";
   }
   return wordOut;
}

string TensDigitToWord(int digitIn) {
   string wordOut;

   if (digitIn == 0) {
      wordOut = "error";
   }
   else if (digitIn == 1) {
      wordOut = "error";
   }
   else if (digitIn == 2) {
      wordOut = "twenty";
   }
   else if (digitIn == 3) {
      wordOut = "thirty";
   }
   else if (digitIn == 4) {
      wordOut = "forty";
   }
   else if (digitIn == 5) {
      wordOut = "fifty";
   }
   else if (digitIn == 6) {
      wordOut = "sixty";
   }
   else if (digitIn == 7) {
      wordOut = "seventy";
   }
   else if (digitIn == 8) {
      wordOut = "eighty";
   }
   else if (digitIn == 9) {
      wordOut = "ninety";
   }
   else {
      wordOut = "error";
   }
   return wordOut;
}

string TwoDigitNumToWords(int numIn) {
   int    tensDigit;
   int    onesDigit;

   // Assumes numIn is 20-99. No error checking performed.

   onesDigit = numIn % 10;  // Ex: 45 % 10 is 5, because 45/10 is 4 with remainder 5.
   tensDigit = numIn / 10;  // Ex: 45 / 10 is 4 (integer division ignores the fraction)

   return TensDigitToWord(tensDigit) + " " + DigitToWord(onesDigit);
}


int main() {
   int userNum;

   cin >> userNum;

   cout << TwoDigitNumToWords(userNum) << endl;

   return 0;
}

/* NOTES

* The first two functions could have returned the string in each branch. But generally, good practice is to only have
  one return statement, at the end of the function. That's not always reasonable, but was easy to accomplish here
  using a variable (wordOut).

* This program only supports 20-99. Supporting 0-9 would involve a simple check in TwoDigitNumToWords, then just call
  DigitToWord. Supporting 10-19 would involve another function called from TwoDigitNumToWords since those values
  are all special cases using one word for the two digits.

* Breaking a problem down into small pieces is common in programming. Here, the problem of output a two-digit number
  was broken down into smaller problems: Converting a one's digit to a word, converting a ten's digit to a word, and
  combining those words.

* This program does no checking to ensure the entered number is within a support range. A better program would
  certainly do such checking, returning an error message.

*/