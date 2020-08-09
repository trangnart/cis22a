#include <iostream>
#include <fstream>      // must include this to do stream IO
#include <sstream>      // make a string version of the stream
using namespace std;

int DateParser(string month);
string DateConvert(string line);

int main() {
    // use constants for things that don't change
    const string FILENAME = "dates.txt";

    ifstream inFS;      // by tradition, the name 'inFS' is used (think cin)
    string line = "";        // a line of text

    // starts with opening a file for reading
    inFS.open(FILENAME);

    // check if we can't open it then exit main()
    if (!inFS.is_open()) {
        // this is where the constant FILENAME is preferred
        cout << "Cannot open " << FILENAME << endl;
        return 1;
    }

    // read until end-of-file (eof)
    while (!inFS.eof() && line != "-1") {
        // use 'getline' because there will be spaces
        // think: 'inFS' is equivalent to 'cin'
        getline(inFS, line);

        // when we can't read the line (error), skip
        if (inFS.fail() || line == "-1") {
            continue;
        }

        string mdy = DateConvert(line);
        if (mdy != "") {
            cout << mdy << endl;
        }
    }

    // close our file
    inFS.close();

    return 0;
}

string DateConvert(string line) {
    string month, day, year;
    int mm, dd, yy;
    size_t pos = line.find(',');

    // no , skip it
    if (pos == string::npos) {
        return "";
    }

    // don't need the , erase it
    // April 23, 2013 -> April 23 2013
    // erase from position, and length
    line.erase(pos, 1);

    // convert 'line' to a stream as if we get it from keyboard
    stringstream ssin(line);

    // similar to cin >> month >> day >> year
    // month = "April"
    // day = "23"
    // year = "2013"
    ssin >> month >> day >> year;

    mm = DateParser(month);         // turns "April" -> 4
    dd = stoi(day);                 // "23" -> 23
    yy = stoi(year);                // "2013" -> 2013

    if (mm && dd >= 1 && dd <= 31 && yy > 0) {
        // same way with 'cout' create the string version
        stringstream ssout;

        // stuff the output to ssout
        ssout << mm << "/" << dd << "/" << yy;

        // return the string version
        return ssout.str();
    }
    return "";
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
