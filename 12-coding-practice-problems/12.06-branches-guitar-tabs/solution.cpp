#include <iostream>
using namespace std;

int main() {
   string userChord; // Currently supported: G, C, D. Future chord may involve multiple characters, like Am.

   cin >> userChord;

   if (userChord == "G") {
      cout << "e|-3-\nB|-0-\nG|-0-\nD|-0-\nA|-2-\nE|-3-" << endl;
      /*
         e|-3-
         B|-0-
         G|-0-
         D|-0-
         A|-2-
         E|-3-
      */
   }
   else if (userChord == "C") {
      cout << "e|-0-\nB|-1-\nG|-0-\nD|-2-\nA|-3-\nE|---" << endl;
      /*
         e|-0-
         B|-1-
         G|-0-
         D|-2-
         A|-3-
         E|---
      */
   }
   else if (userChord == "D") {
      cout << "e|-2-\nB|-3-\nG|-2-\nD|-0-\nA|---\nE|---" << endl;
      /*
         e|-2-
         B|-3-
         G|-2-
         D|-0-
         A|---
         E|---
      */
   }
   else {
      cout << userChord << " is not a supported chord." << endl;
   }

   return 0;
}

/* NOTES

* The comments showing the desired chord help guide the current and future programmer to create a correct output.

* \n is used rather than endl to keep the cout more compact, but endl could be used instead

* The program outputs nothing if anything is entered other than a recognized chord.

* Having an ending "else" to catch unsupported values is a common pattern.

* userChord was declared as string rather than char to support future chords like Am (A minor).

*/