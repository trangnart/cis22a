#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int day(string date);
int DateParser(string month);
int year(string date);
int month(string date);

int main() {
    const string FILENAME = "dates.txt";
    ifstream inFS;
    string date = "";

    inFS.open(FILENAME);

    if (!inFS.is_open()) {
        cout << "Cannot open " << FILENAME << endl;
        return 1;
    }

    while (!inFS.eof() && date != "-1") {
        getline(inFS, date);

        if (inFS.fail()) {
            continue;
        }

        size_t pos = date.find(',');
        if (pos == string::npos) {
            continue;
        }

        if (pos != string::npos) {
            int mm = month(date);
            int dd = day(date);
            int yy = year(date);
            
            if (dd && mm && yy) {
                cout << mm <<  "/" << dd << "/" << yy << endl;
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

    int dd = stoi(day);
    if (dd > 0 && dd < 32) {
        return dd;
    }
    return 0;
}

int month(string date) {
    size_t pos = date.find(' ');
    if (pos == string::npos) {
        return 1;
    }

    string month = date.substr(0, pos);
    int mm = DateParser(month);
    return mm;
}

int DateParser(string month) {
    int monthInt = 0;

    if (month == "January")
        monthInt = 1;
    else if (month == "February")
        monthInt = 2;
    else if (month == "March")
        monthInt = 3;
    else if (month == "April")
        monthInt = 4;
    else if (month == "May")
        monthInt = 5;
    else if (month == "June")
        monthInt = 6;
    else if (month == "July")
        monthInt = 7;
    else if (month == "August")
        monthInt = 8;
    else if (month == "September")
        monthInt = 9;
    else if (month == "October")
        monthInt = 10;
    else if (month == "November")
        monthInt = 11;
    else if (month == "December")
        monthInt = 12;
    return monthInt;
}

int year(string date) {
    size_t pos = date.find(',');

    if (pos == string::npos) {
        return 0;
    }
    string year = date.substr(pos+1);
    int yy = stoi(year);
    return yy;
}
