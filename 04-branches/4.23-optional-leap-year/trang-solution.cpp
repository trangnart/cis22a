#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year % 4 == 0)
        cout << year << " - leap year" << endl;

    else if (year % 400 == 0)
        cout << year << " - leap year" << endl;
        
    else
        cout << year << " - not a leap year" << endl;

   return 0;
}