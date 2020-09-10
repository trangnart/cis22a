#include <iostream>
#include <ctime>
#include <sstream>

using namespace std;

string TimestampToMDY(time_t timestamp);
time_t MDYToTimestamp(int month, int day, int year);

int main() {
    int day, month, year;

    cin >> month >> day >> year;

    time_t uts = MDYToTimestamp(month, day, year);
    string mdy = TimestampToMDY(uts + 86400);

    cout << mdy << endl;

    return 0;
}

string TimestampToMDY(time_t timestamp) {
    struct tm * timeinfo = localtime(&timestamp);
    stringstream ss;

    ss << timeinfo->tm_mon + 1 << " "
       << timeinfo->tm_mday << " "
       << timeinfo->tm_year + 1900;

    return ss.str();
}

time_t MDYToTimestamp(int month, int day, int year) {
    struct tm timeinfo = {
        .tm_mday = day,
        .tm_mon = month - 1,
        .tm_year = year - 1900
    };
    return mktime(&timeinfo);
}