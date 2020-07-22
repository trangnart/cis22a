#include <iostream>
using namespace std;

int main() {
   int total_change;
   int Dollars, Cents, Quarters, Dimes, Nickels, Pennies;
   cin >> total_change;

   Dollars = total_change / 100;
   Cents = total_change % 100;
   Quarters = Cents / 25;
   Cents = Cents % 25;
   Dimes = Cents / 10;
   Cents = Cents % 10;
   Nickels = Cents / 5;
   Cents = Cents % 5;
   Pennies = Cents / 1;

   if (total_change >= 1) {
      if (Dollars > 1)
         cout << Dollars << " Dollars" << endl;
      else if (Dollars == 1)
         cout << Dollars << " Dollar" << endl;

      if (Quarters > 1)
         cout << Quarters << " Quarters" << endl;
      else if (Quarters == 1)
         cout << Quarters << " Quarter" << endl;

      if (Dimes > 1)
         cout << Dimes << " Dimes" << endl;
      else if (Dimes == 1)
         cout << Dimes << " Dime" << endl;

      if (Nickels > 1)
         cout << Nickels << " Nickels" << endl;
      else if (Nickels == 1)
         cout << Nickels << " Nickel" << endl;

      if (Pennies > 1)
         cout << Pennies << " Pennies" << endl;
      else if (Pennies == 1)
         cout << Pennies << " Penny" << endl;
   }
   else
         cout << "No change" << endl;

   return 0;
}