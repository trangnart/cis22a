#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */

int main() {
   vector<int> userValues;
   int upperThreshold;
   int numValues;

   cin >> numValues;
   userValues = GetUserValues(userValues, numValues);

   cin >> upperThreshold;
   OutputIntsLessThanOrEqualToThreshold(userValues, upperThreshold);

   return 0;
}