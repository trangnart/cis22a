#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> yearlyValues(12);
   int i;

   // Get vector values
   for (i = 0; i < 12; ++i) {
      cin >> yearlyValues.at(i);
   }

   /* Type your code here. */

   return 0;
}