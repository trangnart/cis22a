#include <iostream>
using namespace std;

int main() {
    int year;
    bool century_year;

    cin >> year;
    century_year = year % 100 == 0;
    
    if ((century_year && year % 400 == 0) || (!century_year && year % 4 == 0)) {
        cout << year << " - leap year" << endl;
    }
    else {
        cout << year << " - not a leap year" << endl;
    }
   return 0;
}