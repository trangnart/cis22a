#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
   double f0;
   cin >> f0;

   double r = pow(2,(1.0/12.0));
   double f_1 = f0 * pow(r,1);
   double f_2 = f0 * pow(r,2);
   double f_3 = f0 * pow(r,3);
   double f_4 = f0 * pow(r,4);

   cout << fixed << setprecision(2);
   cout << f0 << " " << f_1 << " " << f_2 << " " << f_3 << " " << f_4 << endl;
   
   return 0;
}
