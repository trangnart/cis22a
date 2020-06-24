#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   int numItems;
   vector<string> listItems;
   string currItem;
   int i;

   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }

   /* Type your code here */

   return 0;
}