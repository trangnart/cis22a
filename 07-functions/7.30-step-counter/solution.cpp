#include <iostream>
#include <iomanip>
using namespace std;

double StepsToMiles(int userSteps){
   return userSteps / 2000.0 ;
}

int main() {
   int userSteps;
   double stepMiles;
   cin >> userSteps;
   stepMiles = StepsToMiles( userSteps);
   cout << fixed << setprecision(2);
   cout << stepMiles << endl;
   
   return 0;
}
