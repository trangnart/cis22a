#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int DateParser(string month);

int main() {
    string date = "", word;
    size_t firstPos, secondPos;
    ifstream inFS;
    const string FILE = "dates.txt";

    inFS.open(FILE);
    if (!inFS.is_open()) {
        cout << "Cannot open " << FILE << endl;
        return 1;
    }

    while (!inFS.eof() && date != "-1") {
        getline(inFS, date);

        if (inFS.fail()) {
            continue;
        }
        // find first space result in the month
        firstPos = date.find(' ');
        secondPos = date.find(','); // invalid if has no comma
        if (firstPos == string::npos  || secondPos == string::npos) {
            continue; // skip
        }
        // got the month, is it valid?
        word = date.substr(0, firstPos);
        int monthInt = DateParser(word);
        // invalid
        if (monthInt == 0) {
            continue; // skip
        }
        // find next space
        secondPos = date.find(' ', firstPos+1);
        if (secondPos == string::npos) {
            continue; // missing day & year
        }
        word = date.substr(firstPos+1, secondPos);
        int dayInt = stoi(word);
        if (dayInt < 1 || dayInt > 31) {
            continue; // not correct day
        }

        word = date.substr(secondPos+1, date.length() - secondPos);
        int yearInt = stoi(word);
        if (yearInt <= 0) {
            continue; // invalid year
        }
        // got all info, print out
        cout << monthInt << "/" << dayInt << "/" << yearInt << endl;
    }

    inFS.close();

    return 0;
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