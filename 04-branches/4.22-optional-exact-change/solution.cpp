#include <iostream>
using namespace std;
int main() {
    int changeAmt,
        dollars,
        quarters,
        dimes,
        nickels,
        pennies;

    cin >> changeAmt;

    // how many of each? ex 151
    dollars     = changeAmt / 100; // 151 / 100 = 1 (dollars)
    changeAmt  %= 100;             // 151 % 100 = 51 (changeAmt)
    quarters    = changeAmt / 25;  // 51 / 25 = 2 (quarters)
    changeAmt  %= 25;              // 51 % 25 = 1 (changeAmt)
    dimes       = changeAmt / 10;  // 1 / 10 = 0 (dimes)
    changeAmt  %= 10;              // 1 % 10 = 1 (changeAmt)
    nickels     = changeAmt / 5;   // 1 / 5 = 0 (nickels)
    pennies     = changeAmt % 5;   // 1 % 5 = 1 (penny)

    // now we have all possible denominations
    // see which have some change
    if (dollars > 0)
        cout << dollars
             << (dollars == 1 ? " Dollar" : " Dollars")
             << endl;
    if (quarters > 0)
        cout << quarters
             << (quarters == 1 ? " Quarter" : " Quarters")
             << endl;
    if (dimes > 0)
        cout << dimes
             << (dimes == 1 ? " Dime" : " Dimes")
             << endl;
    if (nickels > 0)
        cout << nickels
             << (nickels == 1 ? " Nickel" : " Nickels")
             << endl;
    if (pennies > 0)
        cout << pennies
             << (pennies == 1 ? " Penny" : " Pennies")
             << endl;

    return 0;
}