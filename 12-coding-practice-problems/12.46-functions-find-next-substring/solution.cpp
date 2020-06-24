#include <iostream>
#include <string>
using namespace std;

int FindNextSubstr(string str, int startIndex, string substr) {
   unsigned int i, j;
   int foundAtIndex = -1;
   bool substrSame;

   // No need to keep searching so near end of str that substr can't fit; hence str.size - substr.size + 1
   for (i = startIndex; (i < str.size() - substr.size() + 1); ++i) {

      // Check if substr exists starting at this index
      substrSame = true; // Assume true, until see even one mismatch
      for (j = 0; j < substr.size(); ++j) { // Do a string comparison
         if (str.at(i + j) != substr.at(j)) {
            substrSame = false;
         }
      }

      if (substrSame) { // Found, stop searching
         foundAtIndex = i;
         break;
      }
   }

   return foundAtIndex;  // Either -1 if not found, or i if found
}


int main() {
   string inputString;
   int startIndex;
   string searchStr;

   cin >> inputString;
   cin >> startIndex;
   cin >> searchStr;

   cout << FindNextSubstr(inputString, startIndex, searchStr) << endl;

   return 0;
}

/* NOTES

* Many ways exist to iterate in this problem. This approach uses a variable foundAtIndex initialized to -1, and breaks out
out of the main loop when a match is found.

* Many ways exist to determine if the substring exists at the current index. We felt it easiest to just write our own
string comparison.

* Getting the indices right and loop bounds right requires very careful attention. One must be especially careful
not to access an invalid index.

*/