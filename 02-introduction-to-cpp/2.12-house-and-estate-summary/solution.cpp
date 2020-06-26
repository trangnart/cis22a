#include <iostream>
using namespace std;

int main() {
   int currentPrice;
   int lastMonthsPrice;
   
   cin >> currentPrice;
   cin >> lastMonthsPrice;

   cout << "This house is $" << currentPrice << ". The change is $" << currentPrice - lastMonthsPrice  << " since last month." << endl;
   cout << "The estimated monthly mortgage is $" << (currentPrice * 0.051) / 12 << "." << endl;

   return 0;
}
