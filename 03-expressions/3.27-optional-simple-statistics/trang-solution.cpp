#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   cin >> num1 >> num2 >> num3 >> num4;
   
   cout << fixed << setprecision(3);
   cout << num1 * num2 * num3 * num4 << " " << (num1 + num2 + num3 + num4)/4 << endl;
   cout << static_cast<double>(num1 * num2 * num3 * num4) << " " << (num1 + num2 + num3 + num4)/4.000 << endl;
     

   return 0;
}
