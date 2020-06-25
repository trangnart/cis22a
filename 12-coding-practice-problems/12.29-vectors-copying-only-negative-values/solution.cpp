#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> listInts(8);
   vector<int> listNegInts;
   unsigned int i;

   // Get input integers
   for (i = 0; i < 8; ++i) {
      cin >> listInts.at(i);
   }

   /* Type your code here. */

   // Copy negative integers to new vector
   for (i = 0; i < 8; ++i) {
      if (listInts.at(i) < 0) { // Negative, so copy to other negatives list
         listNegInts.push_back(listInts.at(i));
      }
   }

   // Output negative integers
   cout << listNegInts.size() << endl;
   for (i = 0; i < listNegInts.size(); ++i) {
      cout << listNegInts.at(i) << endl;
   }

   return 0;
}

/* NOTES

* push_back() is handy when a vector's size is not known beforehand

* size() is common for looping through a vector's elements. Note that if size is 0, the for loop's body won't be entered.

*/