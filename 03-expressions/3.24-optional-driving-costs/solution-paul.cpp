#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
   double mpg, cost;
   vector<int> ranges = {20, 75, 500};

   cin >> mpg >> cost;
   cout << fixed << setprecision(2);

   // auto r -- automatically figure out what type to use
   for ( auto r: ranges ) {
      cout << r / mpg * cost
           << ((r != ranges.back()) ? " " : "\n");
   }

   return 0;
}
