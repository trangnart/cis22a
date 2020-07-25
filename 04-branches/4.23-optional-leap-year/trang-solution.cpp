#include <iostream>
#include <string>
using namespace std;

int main() {
    int year;
    string leap_year;

    cin >> year;

    if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)) {
        cout << year << " - leap year" << endl;
    }
    else {
        cout << year << " - not a leap year" << endl;
    }
   return 0;
}