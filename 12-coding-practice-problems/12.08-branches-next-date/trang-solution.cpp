#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int day , month, year;
    cin >> month >> day >> year;

    struct tm dateTm = {
        .tm_mday = day,
        .tm_mon = month - 1,
        .tm_year = year - 1900};

    time_t thisDay = mktime(&dateTm);
    time_t nextDay = thisDay + (24 * 60 * 60);

    struct tm *nextDayTm = localtime(&nextDay);

    cout << nextDayTm->tm_mon + 1 << " "
         << nextDayTm->tm_mday << " "
         << nextDayTm->tm_year + 1900
         << endl;

    return 0;
}