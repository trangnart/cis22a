#include <iostream>
#include <iomanip>
using namespace std;

double StepsToMiles(int userSteps);

int main() {
   int userSteps;
   
   cin >> userSteps;

   cout << fixed << setprecision(2);
   cout << StepsToMiles(userSteps) << endl;

   return 0;
}

double StepsToMiles(int userSteps) {
   return userSteps / 2000.00;
}
