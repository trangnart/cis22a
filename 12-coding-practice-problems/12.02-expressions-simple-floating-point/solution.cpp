#include <iostream>
using namespace std;

int main() {
   int x;
   double y;

   cin >> x;

   y = ((1.0 / 3.0) * x) + (x / 4.0) + (2.0 * x);

   cout << y << endl;

   return 0;
}

/* NOTES

* Floating-point calculations aren't perfect in a computer, because some values can't be represented precisely using
limited numbers of bits. Thus, the order in which calculations are performed could yield slightly different results.
Hence, the instructions made clear not to rearrange or simplify the equation.

* Although (1.0 / 3) or (1 / 3.0) would have also performed floating-point division, good practice is to make all
literals floating-point values, as in (1.0 / 3.0), when doing floating-point calculations, thus making your intentions
100% clear to someone else reading the program.


*/
