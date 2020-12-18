#include <iostream>
#include <cmath>
using namespace std;

/*
   d^2 = w^2 + h^2  (Pythagorean's theorem)
   h^2 = d^2 - w^2
   h = sqrt(d^2 - w^2)

*/

int main() {
   int tvWidth;
   double tvHeight;
   int tvDiagonal;

   cin >> tvDiagonal;

   for (tvWidth = 1.0; tvWidth < tvDiagonal; tvWidth += 1.0) {

      tvHeight = sqrt( (tvDiagonal * tvDiagonal) - (tvWidth * tvWidth) );

      if (tvWidth > tvHeight) {
         cout << tvWidth << " " << tvHeight << endl;
      }
   }

   return 0;
}

/* NOTES

* The lower and upper bounds on the for loop could be tighter, but the performance overhead is trivial.
  We gave clean/simple code priority.

* The comment at the top helps a future reader know where the height equation came from.

*/