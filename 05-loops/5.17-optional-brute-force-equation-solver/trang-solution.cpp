#include <iostream>
#include <string>
using namespace std;

int main() {
   int x_1, y_1, sol_1;
   int x_2, y_2, sol_2;
   int x, y, test_1, test_2;

   cin >> x_1 >> y_1 >> sol_1;
   cin >> x_2 >> y_2 >> sol_2;

   for (x = -10; x < 11; ++x) {
      for (y = -10; y < 11; ++y) {
         test_1 = (x_1*x) + (y_1*y);
         test_2 = (x_2*x) + (y_2*y);
         if (test_1 == sol_1 && test_2 == sol_2) {
            cout << x << " " << y << endl;
            return 0;
         }
      }
   }
   cout << "No solution" << endl;

   return 1;
}
