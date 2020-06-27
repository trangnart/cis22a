#include <iostream>
using namespace std;

// Hint: Define MaxFive

int main() {
   // Don't modify main's code below
   int v, w, x, y, z;
   int maxVal;
   
   cin >> v; cin >> w; cin >> x; cin >> y; cin >> z;
   maxVal = MaxFive(v, w, x, y, z);
   cout << maxVal << endl;

   return 0;
}