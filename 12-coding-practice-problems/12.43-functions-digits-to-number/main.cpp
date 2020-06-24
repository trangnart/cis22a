#include <iostream>
#include <vector>
using namespace std;

// Type your code here


int main() {
   int userDigit;
   vector<int> digitsList;
   int resultNum;

   while (cin >> userDigit) {
      digitsList.push_back(userDigit);
   }

   resultNum = DigitsToNum(digitsList);

   cout << resultNum << endl;

   return 0;
}