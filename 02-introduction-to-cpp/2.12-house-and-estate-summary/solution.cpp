#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
   int currentPrice,
       lastMonthsPrice,
       changePrice;
   string prefix;

   cin >> currentPrice;
   cin >> lastMonthsPrice;

   changePrice = currentPrice - lastMonthsPrice;
   prefix = changePrice < 0 ? "-$" : "$";

   cout << "This house is $" << currentPrice << ". ";
   cout << "The change is "
        << prefix << abs(changePrice)
        << " since last month.\n";
   cout << "The estimated monthly mortgage is $"
        << (currentPrice * 0.051) / 12
        << ".\n";

   return 0;
}
