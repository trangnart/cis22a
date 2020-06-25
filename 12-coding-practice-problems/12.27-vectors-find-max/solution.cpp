#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numItems;
   vector<int> listItems;
   int currItem;
   int i;
   int maxItem;

   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }

   /* Type your code here */
   maxItem = listItems.at(0); // Initializing to value 0 would be WRONG. Can initialize to any arbitrary element's value.
   for (i = 0; i < numItems; ++i) {
      if (listItems.at(i) > maxItem) {
         maxItem = listItems.at(i); // This item is max seen so far, so update the max
      }
   }

   cout << maxItem << endl;

   return 0;
}

/* NOTES

* Initializing maxItem to 0 would be WRONG. The test case with negative numbers would incorrectly output 0. maxItem can
  instead be initialized to any arbitrary element's value. Some programmers might instead initialize maxItem to the smallest
  possible value on the system (the smallest possible negative value), but that approach is unnecessarily complex.

* The pattern of traversing a vector and keeping track of the max or min value is a common pattern.

*/