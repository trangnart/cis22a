#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   string cleanedText;
   // Hint: Add declarations as needed
   unsigned int i, j, n;

   getline(cin, userText);

   /* Type your code here. */

   // Find first non-space character
   i = 0;
   while ((i < userText.size()) && (userText.at(i) == ' ')) {
      ++i;
   }

   if (i == userText.size()) {
      return 0; // No non-space characters, just return
   }

   // Find last non-space character
   j = userText.size() - 1;
   while ((j >= 0) && (userText.at(j) == ' ')) {
      --j;
   }

   // Copy just characters from i to j to new string
   for (n = i; n <= j; ++n) {
      cleanedText.push_back(userText.at(n));
   }

   cout << cleanedText << endl;

   return 0;
}

/* NOTES

* You should manually trace the situation of an empty string "", or a string with only spaces like "   ", to ensure
  they work (and don't access invalid elements).

* while loops are used because the number of leading and trailing spaces are unknown. The for loop is used because
  the number of iterations is known (i to j).

* The while expressions importantly will not evaluate the second term of an && if the first term is false. That is
  important, because otherwise they would access invalid elements

* Try removing the if statement and see what happens. The program crashes, because i is one past the last valid element.

* The for loop using push_back is a simple pattern to copy part of a string

*/