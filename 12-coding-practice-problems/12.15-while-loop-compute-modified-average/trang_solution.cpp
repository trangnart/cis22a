#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int userInt, sum = 0, valid = 0, invalid = 0;
   cin >> userInt;

   if (userInt == 0) {
      cout << '0' << endl;
      exit(1);
   }

   while (userInt != 0) {
      if (userInt > 1 && userInt < 13) {
         sum += userInt;
         valid++;
      }
      else {
         invalid++;
      }
      cin >> userInt;
   }

   cout << "Average: " << static_cast<double>(sum / valid) << endl
        << "Valid: " << valid << endl
        << "Invalid: " << invalid << endl;

   return 0;
}