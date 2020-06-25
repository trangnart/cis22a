#include <iostream>
using namespace std;

int GetAge(int birthMonth, int birthDay, int birthYear, int currMonth, int currDay, int currYear) {
   int currAge;

   currAge = currYear - birthYear;
   // Determine if need to reduce by 1 if birthday not yet reached
   if (currMonth < birthMonth) { // Birth month not yet reached, reduce by 1
      currAge = currAge - 1;
   }
   else if (currMonth == birthMonth) {
      if (currDay < birthDay) { // In birth month, but birthday not yet reached
         currAge = currAge - 1;
      }
   }

   return currAge;
}

/* NOTES

* The program display a common pattern of first performing a simple calculation, and then adjusting for special cases.
  Here, the initial calculation just subtracts years. Then, two cases are listed that indicate that the birth date hasn't
  been reached yet, both requiring decrementing by 1.

* A mistake would be for the else condition to just be currDay < birthDay. That condition only matters if the current
  month and birth month are equal. If the relation is <, or >, the current and birth days don't matter.

*/


int main() {
   int birthMonth, birthDay, birthYear;
   int currMonth, currDay, currYear;

   cin >> birthMonth;  cin >> birthDay;  cin >> birthYear;
   cin >> currMonth;   cin >> currDay;   cin >> currYear;

   cout << GetAge(birthMonth, birthDay, birthYear, currMonth, currDay, currYear) << endl;

   return 0;
}