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

    if (passengerAge < 3) {
        airFare = 0;
    }
    else if (passengerAge > 59) {
        airFare = 290;
    }
    else if (passengerAge < 60) {
        airFare = 300;
    }
    if (carryOns == 1) {
        airFare += 10;
    }
    if (checkedBags > 1) {
        airFare += ((checkedBags-1) * 50)-25;
    }

    cout << airFare << endl;

    return 0;
}