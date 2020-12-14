#include <iostream>
using namespace std;

int main() {

   int userInt;
   int divisor;

   cin >> userInt;

   divisor = userInt;
   while (divisor != 0) {
      cout << divisor % 10 << endl; // Outputs rightmost digit
      divisor = divisor / 10; // Shifts the integer right by one digit
   }

   return 0;
}

/* NOTES

* Using % 10 is a common way to get the rightmost digit's value. Ex: 532 % 10 is 2 (the quotient is 53, remainder 2).

* Using / 10 is a common way to shift a decimal value to the right by one digit. Ex: 532 / 10 is 53. Note that integer
  division drops any fractional part, so the result is 53, not 53.2.

*/