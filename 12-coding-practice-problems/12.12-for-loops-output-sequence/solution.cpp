#include <iostream>
using namespace std;

int main() {
   int n;
   int i;

   cout << "Enter an integer:" << endl;
   cin >> n;

   cout << "Sequence: ";
   /* Type your code here. */
   if (n < 0) {
      n = -n;
   }
   for (i = -n; i <= n; ++i) {
      cout << i << " ";
   }
   cout << endl;

   return 0;
}
