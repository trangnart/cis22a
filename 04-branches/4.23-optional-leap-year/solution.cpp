#include <iostream>
using namespace std;

int main()
{
    int year;
    bool isDivBy4, isDivBy400, isCenturyYear, isLeapYear;

    cin >> year;

    // need only isCenturyYear but creating more booleans for clarity
    isCenturyYear = year % 100 == 0;
    isDivBy4      = year % 4   == 0;
    isDivBy400    = year % 400 == 0;
    isLeapYear    = (!isCenturyYear && isDivBy4)
                 || (isCenturyYear && isDivBy400);

    cout << year << " - "
         << (!isLeapYear ? "not a " : "") // inline if statement
         << "leap year\n";

    return 0;
}