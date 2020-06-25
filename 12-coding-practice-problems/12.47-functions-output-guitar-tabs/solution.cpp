#include <iostream>
#include <string>
using namespace std;

int main() {
   string eString = "e|-";
   string BString = "B|-";
   string GString = "G|-";
   string DString = "D|-";
   string AString = "A|-";
   string EString = "E|-";
   int numChords;
   string userChord;
   int i;

   cin >> numChords;
   for (i = 0; i < numChords; ++i) { // Build each string by appending each chord's tab
      cin >> userChord;
      if (userChord == "G") {  // Tab: 300023
         eString.append("3-");
         BString.append("0-");
         GString.append("0-");
         DString.append("0-");
         AString.append("2-");
         EString.append("3-");
      }
      else if (userChord == "C") { // Tab: 01023-
         eString.append("0-");
         BString.append("1-");
         GString.append("0-");
         DString.append("2-");
         AString.append("3-");
         EString.append("--");
      }
      else if (userChord == "D") { // Tab: 2320--
         eString.append("2-");
         BString.append("3-");
         GString.append("2-");
         DString.append("0-");
         AString.append("--");
         EString.append("--");
      }
   }

   cout << eString << endl;
   cout << BString << endl;
   cout << GString << endl;
   cout << DString << endl;
   cout << AString << endl;
   cout << EString << endl;

   return 0;
}

/* NOTES

* The language is case sensitive. The above took advantage of that by declaring both eString and EString, thus
  keeping with the standard tab convention of writing the low guitar string as E and the high guitar string as e.

* When outputting an item that flows to the right but on many lines, the pattern of creating building a string
  for each line, and then outputting all the strings at the end, is a common pattern.

* Some programmers might use push_back() instead of append(), but push_back() only appends one character,
  necessitating two calls. Using append(), which appends a string, is cleaner.

* Requiring the user to type the number of chords was done to simplify this program. A preferred approach simply
  reads until reaching the end of input (or reaching a special input string like "done").

* A more complete program would include "measures" (groups of chords). Such a program would indeed be very useful
  for generating tabs commonly found on various websites like https://www.ultimate-guitar.com/

*/