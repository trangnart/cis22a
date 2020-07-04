#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int userNum;
   int userNum2;

   cout << "Enter integer: ";
   cin >> userNum;

   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << pow(userNum, 2) << endl;
   cout << "And " << userNum << " cubed is " << pow(userNum, 3) << "!!" << endl;

   cout << "Enter another integer: ";
   cin >> userNum2;

   cout << userNum << " + " << userNum2 << " is " << userNum + userNum2 << endl;
   cout << userNum << " * " << userNum2 << " is " << userNum * userNum2 << endl;

   return 0;
}