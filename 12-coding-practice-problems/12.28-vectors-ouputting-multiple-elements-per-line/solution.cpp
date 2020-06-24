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

   // Output values, four per line
    for (i = 0; i < 12; i += 4) {
      cout << yearlyValues.at(i) << " ";
      cout << yearlyValues.at(i + 1) << " ";
      cout << yearlyValues.at(i + 2) << " ";
      cout << yearlyValues.at(i + 3) << endl;
   }

   return 0;
}

   /* NOTES

   * Because the number of elements and number per line are fixed at 12 and 4, this straightforward approach was possible.
     If those numbers could vary, nested loops would likely be needed.

   * Care should always be taken to be sure no statement accesses an invalid vector element. Here, the lowest element
     will be when i = 0, element i (0). The highest will be when i = 8, element i + 3 (11). Both are valid.

   * An alternative approach increments by 1 and uses an if-else in the loop body that checks if a space or newline should be output.

   */