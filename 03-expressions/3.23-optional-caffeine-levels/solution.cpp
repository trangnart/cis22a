#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   
   cin >> caffeineMg;
   
   cout << fixed << setprecision(2);
   cout << "After 6 hours: " << caffeineMg / 2.0 << " mg" << endl;
   cout << "After 12 hours: " << caffeineMg / 4.0 << " mg" << endl;
   cout << "After 24 hours: " << caffeineMg / 16.0 << " mg" << endl;

   return 0;
}
