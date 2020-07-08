#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double caffeineMg;

   cin >> caffeineMg;
   cout << fixed << setprecision(2);

   // to make this function expandable,
   // use a loop instead of writing 3 statements
   // doubling every time through the loop
   for (int hours = 6; hours <= 24; hours *= 2)
   {
      // hours / 6 -- takes gives 1, 2, and 4
      // power by using double-shift 1<<1=2, 1<<2=4, 1<<4=16
      // math is beautiful
      double mg = caffeineMg / (1 << ( hours / 6 ));
      cout << "After " << hours << " hours: " << mg << " mg\n";
   }

   return 0;
}