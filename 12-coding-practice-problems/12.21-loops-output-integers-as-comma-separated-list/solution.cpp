#include <iostream>
using namespace std;

int main() {
   int numInts;
   int currInt;
   int i;

   cin >> numInts;
   for (i = 0; i < numInts; ++i) {
      if (i > 0) { // All but first int get preceded by comma and space.
         cout << ", ";
      }
      cin >> currInt;
      cout << currInt;
   }
   cout << "." << endl;

   return 0;
}

/* NOTES

* Doing something special for the first and/or last items in a loop is a common pattern. Such items can be found
  using an if statement that checks the index.

* Doing something just after a loop (in this case, adding a period) is also a common pattern.

* The programmer might have considered outputting the comma and space just AFTER printing an integer instead of before,
  but there's no way to remove those for the last item. Thus, printing the comma and space BEFORE is preferred,
  but requires a check for the first item.
*/