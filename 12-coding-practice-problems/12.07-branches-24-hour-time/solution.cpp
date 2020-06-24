#include <iostream>
using namespace std;

int main() {

   int hourAmPm;
   int minAmPm;
   string amPm;

   int hour24;

   cin >> hourAmPm;
   cin >> minAmPm;
   cin >> amPm;

   if ( (hourAmPm == 12) && (amPm == "am") ) { // Special case for first hour
      hour24 = 0;
   }
   else if ( (amPm == "pm") && (hourAmPm != 12) ) { // Add 12 for 1 pm and higher (not for 12 pm).
      hour24 = hourAmPm + 12;  // Ex: 2 pm becomes 14
   }
   else { // must be 1 am to 11 am, so hour stays the same (e.g., 9 am stays 9 am
      hour24 = hourAmPm;
   }

   if (hour24 < 10) { // Prepend a "0", such as 02:30
      cout << "0";
   }

   cout << hour24 << ":";

   if (minAmPm < 10) { // Prepend a "0", such as 12:01
      cout << "0";
   }

   cout << minAmPm << endl;

   return 0;
}

/* NOTES

* Enumerating cases as above is a common skill needed by a programmer.

* Formulating an if-else to detect each case is also a common skill. Note that the structure of the if-else captures
  each case, without using complicated expressions, because if an expression evaluates to false, the next expression
  can take advantage of that fact, especially in the "else" part.

* The output is just text, so we could prepend 0's to the hour and minute. Trying to get those integers to output
  with a leading 0 would have been hard. The program could have also written to a string, and then output that string.

*/