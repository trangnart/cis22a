#include <iostream>
#include <string>
using namespace std;

// Type your code here


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