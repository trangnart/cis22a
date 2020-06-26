#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
   double miles_gallon;
   double dollars_gallon;
   
   cin >> miles_gallon >> dollars_gallon;
   
   cout << fixed << setprecision(2);
   cout << 20 / miles_gallon * dollars_gallon << " ";
   cout << 75 / miles_gallon * dollars_gallon << " ";
   cout << 500 / miles_gallon * dollars_gallon << endl;

   return 0;
}
