#include <iostream>
using namespace std;

void CentsToDollarsCents(int userCents, int& numDollars, int& numCents) {
   numDollars = userCents / 100; // Ex: 752 / 100 is 7 (integer division ignores fraction)
   numCents   = userCents % 100; // Ex: 752 % 100 is 52, because 752/100 is 7 remainder 52.
}


int main() {
   int userCents;  // Ex: 752
   int numDollars; // Just the number of dollars (no remaining cents). Ex: 7
   int numCents;   // Just the remaining cents after dollars. Ex: 52

   cin >> userCents;

   CentsToDollarsCents(userCents, numDollars, numCents);

   cout << numDollars << " dollars " << numCents << " cents" << endl;

   return 0;
}