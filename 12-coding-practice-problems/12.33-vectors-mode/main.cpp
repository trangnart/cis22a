#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userValues(10);
   int i;

   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }

   /* Type your code here. */

   return 0;
}