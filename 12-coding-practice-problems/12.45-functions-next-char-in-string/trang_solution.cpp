#include <iostream>
#include <string>
using namespace std;

int FindNextCharInString(const string& inputString, const int& startIndex, const char& searchChar) {
    for (int i = startIndex; i < inputString.length(); i++) {
        if (inputString[i] == searchChar) {
            return i;
        }
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