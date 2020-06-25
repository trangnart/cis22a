#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userText;
   unsigned int i;
   char c; // Improves code readability in expressions below
   bool lengthOK = false;
   bool hasLetter = false;
   bool hasNumber = false;
   bool hasSpecial = false;

   cin >> userText;

   if (userText.size() >= 8) {
      lengthOK = true;
   }

   for (i = 0; i < userText.size(); ++i) {
      c = userText.at(i);

      if (isalpha(c)) {  // At least one letter found
         hasLetter = true;
      }
      else if (isdigit(c)) { // At least one number found
         hasNumber = true;
      }
      else if ( (c == '!') || (c == '#') || (c == '%') ) {
         hasSpecial = true;
      }
   }

   if (lengthOK && hasLetter && hasNumber && hasSpecial) { // All requirements met
      cout << "OK" << endl;
   }
   else {
      if (!lengthOK) {
         cout << "Too short" << endl;
      }
      if (!hasLetter) {
         cout << "Missing letter" << endl;
      }
      if (!hasNumber) {
         cout << "Missing number" << endl;
      }
      if (!hasSpecial) {
         cout << "Missing special" << endl;
      }
   }

   return 0;
}


/* NOTES

* Using boolean variables makes the code a lot easier to read than some other approaches.

* A common mistake is to set each boolean as hasLetter = isalpha(c). That statement will keep changing hasLetter's value
  based on each character, with the final value being for the last character. Instead, only one letter must exist,
  so once true, this value should never be set back to false. The if statement accomplishes that.

* The ending if-else checks if all requirements are met (outputting OK if so). If not all are met, then the else
  part has a nested series of if statements, in order to print every failed requirement. A common mistake is to
  use a nested if-else, which would only print one failed requirement.

* Inside the for loop, and if-else was used because a character can only be one of those things. But a series of
  if statements would have worked as well (for the same reason; only one could have a true expression).

* Be careful to use && and not &, and || and not |. (& and | are for bitwise and / or, not logical and / or).

* Don't do this: if (lengthOK == false). When using boolean variables, good practice in logical expressions is to just
  list the boolean variable, either in true (lengthOK) or complemented (!lengthOK) form. The expressions are more
  concise and easier to comprehend.

* The character c was introduced to make the expressions concise and easy-to-read. Normally variables should have
  meaningful names (and some say at least two words as well, like userText). Exceptions include loop indices like i,
  coordinates like x and y, and in this case a single character in a string like c.

*/