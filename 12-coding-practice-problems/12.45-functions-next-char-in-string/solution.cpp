#include <iostream>
#include <string>
using namespace std;

int FindNextCharInString(string s, int startIndex, char c) {
   unsigned int i;
   bool charFound = false;

   for (i = startIndex; (i < s.size()) && !charFound; ++i) {
      if (s.at(i) == c) { // Found, stop searching
         charFound = true;
      }
   }

   if (charFound) {
      return i - 1;  // -1 because ++i got executed after char was found at index i
   }
   else {
      return -1;
   }
}


int main() {
   string inputString;
   int startIndex;
   char searchChar;

   cin >> inputString;
   cin >> startIndex;
   cin >> searchChar;

   cout << FindNextCharInString(inputString, startIndex, searchChar) << endl;

   return 0;
}

/* NOTES

* The loop must immediately stop iterating, else this will not be correct. Other approaches are possible, like using break
to exit the loop, or using a variable to store the index (initialized to -1) and letting iteration complete.

* A while loop is also reasonable. We like to use for loops to iterate through strings or vectors, even if we might
exit early, to be consistent across all our code that iterates through strings or vectors. The code gets a familiar feel.

*/