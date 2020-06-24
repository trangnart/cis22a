#include <iostream>
#include <string>
using namespace std;

// Type your code here

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