#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0); // 1599685061 9/9/2020 1:58pm PST
    time_t oneDay = 24 * 60 * 60; // 24 hr * 60 min * 60 sec

    time_t yesterday = now - oneDay; // yesterday in secs

    // convert time_t to actual values year, month, day
    struct tm *tinfo = localtime( &yesterday );

    // see it
    cout << yesterday << " -> "
         << tinfo->tm_mon + 1 << "/"
         << tinfo->tm_mday << "/"
         << tinfo->tm_year + 1900 << endl;

    // make a struct of date
    struct tm trangTm = {
        .tm_mday = 22,
        .tm_mon = 8,
        .tm_year = 101
    };
    time_t myDob = mktime( &trangTm );  // convert it to time_t

    // see it
    cout << myDob << " -> "
         << trangTm.tm_mon + 1 << "/"
         << trangTm.tm_mday << "/"
         << trangTm.tm_year + 1900 << endl;

    // make a struct from existing time
    struct tm *paulTm = localtime( &now );
    paulTm->tm_mon = 2;
    paulTm->tm_year = 1973 - 1900;
    paulTm->tm_mday = 27;

    // convert it back to time_t
    time_t pDob = mktime(paulTm);

    cout << pDob << " -> "
         << paulTm->tm_mon + 1 << "/"
         << paulTm->tm_mday << "/"
         << paulTm->tm_year + 1900 << endl;

    // go back one day
    time_t dayBefore = pDob - oneDay;

    // convert it to struct
    struct tm *dbinfo = localtime( &dayBefore );

    // print it out
    cout << dayBefore << " -> "
         << dbinfo->tm_mon + 1 << "/"
         << dbinfo->tm_mday << "/"
         << dbinfo->tm_year + 1900 << endl;

    return 0;
}