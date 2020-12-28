#include <iostream>
#include <vector>
using namespace std;

int DigitsToNum(vector<int> digitsList) {
   unsigned int i;
   int currWeight = 1;
   int totalNum = 0;

   for (i = 0; i < digitsList.size(); ++i) {
      totalNum += digitsList.at(i) * currWeight;
      currWeight *= 10;
   }
   return totalNum;
}


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


/* NOTES

* The current weight could instead be derived from i, by computing 10^i. We felt our approach was equally intuitive.

*/