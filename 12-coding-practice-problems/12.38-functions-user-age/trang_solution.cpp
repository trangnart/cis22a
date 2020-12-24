#include <iostream>
using namespace std;

int GetAge(int birthMonth, int birthDay, int birthYear, int currMonth, int currDay, int currYear) {
    int currAge = currYear - birthYear;

    if (currMonth < birthMonth) {
        currAge--;
    }
    else if (currMonth == birthMonth && currDay < birthDay) {
        currAge--;
    }

    return currAge;
}


int main() {
   int birthMonth, birthDay, birthYear;
   int currMonth, currDay, currYear;

   cin >> birthMonth;  cin >> birthDay;  cin >> birthYear;
   cin >> currMonth;   cin >> currDay;   cin >> currYear;

   cout << GetAge(birthMonth, birthDay, birthYear, currMonth, currDay, currYear) << endl;

   return 0;
}
