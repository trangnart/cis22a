#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> binaryNum(8);
   int digitWeight;
   int decimalSum;
   int i;

   // Get user's binary number. Store leftmost bit in element 7, rightmost in 0.
   for (i = 7; i >= 0; --i) {
      cin >> binaryNum.at(i);
   }

   // Compute decimal equivalent
   decimalSum = 0;
   digitWeight = 1; // Rightmost digit's weight, 2^0
   for (i = 0; i < 8; ++i) {
      decimalSum += binaryNum.at(i) * digitWeight;
      digitWeight *= 2;
   }

   cout << decimalSum << endl;

   return 0;
}