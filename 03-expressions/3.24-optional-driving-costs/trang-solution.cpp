#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
    double miles_gallon, dollars_gallon;

    cin >> miles_gallon >> dollars_gallon;

    cout << fixed << setprecision(2);
    cout << (dollars_gallon * 20)/ miles_gallon << " " 
         << (dollars_gallon * 75)/ miles_gallon << " " 
         << (dollars_gallon * 500)/ miles_gallon << " " << endl;

   return 0;
}
