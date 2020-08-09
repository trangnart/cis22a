#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int day(string date);
int month(string date);
int year(string date);

int main() {
    const string FILENAME = "dates.txt";
    ifstream inFS;
    string date;

    inFS.open(FILENAME);

    if (!inFS.is_open()) {
        cout << "Cannot open " << FILENAME << endl;
        return 1;
    }

    while (!inFS.eof()) {
        getline(inFS, date);

        if (inFS.fail() || date == "-1") {
            break;
        }

        size_t pos = date.find(',');
        if (pos == string::npos || date == "-1") {
            continue;
        }
        
        if (pos != string::npos) {
            if (month(date) != 0 && (day(date) > 0 && day(date) < 32) && year(date) != 0) {
                cout << month(date) <<  "/" << day(date) << "/" << year(date)
                     << endl;
            }
        }
    }
    inFS.close();

    return 0;
}

int day(string date) {
    size_t pos = date.find(' ');

    if (pos == string::npos) {
        return 0;
    }
    string day = date.substr(pos);
    return stoi(day);
}

int month(string date) {
    size_t pos = date.find(' ');
    if (pos == string::npos) {
        return 1;
    }
    string get_month = date.substr(0, pos);
    int monthInt = 0;

    if (get_month == "January")
        monthInt = 1;
    else if (get_month == "February")
        monthInt = 2;
    else if (get_month == "March")
        monthInt = 3;
    else if (get_month == "April")
        monthInt = 4;
    else if (get_month == "May")
        monthInt = 5;
    else if (get_month == "June")
        monthInt = 6;
    else if (get_month == "July")
        monthInt = 7;
    else if (get_month == "August")
        monthInt = 8;
    else if (get_month == "September")
        monthInt = 9;
    else if (get_month == "October")
        monthInt = 10;
    else if (get_month == "November")
        monthInt = 11;
    else if (get_month == "December")
        monthInt = 12;
    return monthInt;
}

int year(string date) {
    size_t pos = date.find(',');

    if (pos == string::npos) {
        return 0;
    }
    string year = date.substr(pos+1);
    return stoi(year);
}