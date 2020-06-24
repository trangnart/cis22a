#include <iostream>
using namespace std;

int main() {
   int n;  // MAKE userNum
   int i;

   cout << "Enter an integer:" << endl;
   cin >> n;

   cout << "Sequence: ";
   /* Type your code here. */
   if (n < 0) {
      n = 0;
   }

   if ((n % 2) == 1) {  // Odd
      n = n - 1;
   }

   for (i = n; i >= 0; i = i - 2) {
      cout << i << " ";
   }
   cout << endl;

   return 0;
}