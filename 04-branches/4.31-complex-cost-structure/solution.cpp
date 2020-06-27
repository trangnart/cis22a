#include <iostream>
using namespace std;

int main() {
  int passengerAge;
  int carryOns;
  int checkedBags; 
  int airFare; 
  
  cin >> passengerAge;
  cin >> carryOns;
  cin >> checkedBags; 

  if (passengerAge <= 2 )
    airFare = 0;
  else if (passengerAge >= 60)
    airFare = 290;
  else if (passengerAge < 60)
    airFare = 300;

  if (carryOns > 0)
    airFare += carryOns * 10;

  if (checkedBags == 2)
    airFare += 25;
  else if (checkedBags > 2)
    airFare += ((checkedBags - 2) * 50 + 25);
  
  cout << airFare << endl;

  return 0;
}