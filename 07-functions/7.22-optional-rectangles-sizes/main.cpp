#include <iostream>
#include <cstdlib>
using namespace std;

/* Type your code here */ 


int main() {
   int r1xul, r1yul, r1xbr, r1ybr; // x upper-left, y upper-left, x bottom-right, y bottom-right
   int r2xul, r2yul, r2xbr, r2ybr;
   
   cin >> r1xul; cin >> r1yul; cin >> r1xbr; cin >> r1ybr;
   cin >> r2xul; cin >> r2yul; cin >> r2xbr; cin >> r2ybr;

   cout << FirstRectangleSmaller(r1xul, r1yul, r1xbr, r1ybr, r2xul, r2yul, r2xbr, r2ybr) << endl;

   return 0;
}
