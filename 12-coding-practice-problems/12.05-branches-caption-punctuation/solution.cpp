#include <iostream>
using namespace std;

int main() {
   string userCaption;
   int lastIndex;
   char lastChar;

   getline(cin, userCaption);

   lastIndex = userCaption.size() - 1;
   lastChar = userCaption.at(lastIndex);

   if ((lastChar == '!') || (lastChar == '?')) {
      // Caption OK; do nothing
   }
   else if (lastChar == ',') {
      userCaption.at(lastIndex) = '.'; // Replace ending , (common mistake) by .
   }
   else if (lastChar != '.') { // Not ! ? , . so append .
      userCaption.push_back('.');
   }
   else if ((lastIndex > 0) && (lastChar == '.') && (userCaption.at(lastIndex - 1) == '.')) { // Two periods
      // Three periods?
      if ((lastIndex > 1) && (userCaption.at(lastIndex - 2) == '.')) {
         // Caption OK (ends with elipses ...  Do nothing
      }
      else { // Ends with two periods; remove one
         userCaption.pop_back();
      }
   }

   cout << userCaption << endl;

   return 0;
}


/* NOTES

* Careful arrangement of the if-else simplifies the coding.

* When accessing string elements, always make sure the element exists. Hence the checks for lastIndex > 0 and > 1.

* This kind of form entry correction is common.

* lastChar and lastIndex variables aren't necessary but make the code more readable.

*/