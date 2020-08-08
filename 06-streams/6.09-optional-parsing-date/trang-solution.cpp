#include <iostream>
#include <string>
using namespace std;

string day(string date);
int month(string date);
string year(string date);


int main() {
    string date;

    cout << "Enter input string:" << endl;
    getline(cin, date);

    size_t pos = date.find(',');
    if (pos != string::npos) {
        cout << month(date) <<  "/" << day(date) << "/" << year(date)
             << endl;
    }

    // else. I need hint to do the ignore if the dates's format is not correct

    return 0;
}

string day(string date) {
    size_t pos = date.find(',');
    size_t first_space = date.find(" ");
    if (pos == string::npos) {
        return "";
    }
    return date.substr(first_space + 1, pos - first_space -1);
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

string year(string date) {
    size_t pos = date.find(',');
    if (pos == string::npos) {
        return "";
    }
    return date.substr(pos+2, date.length() - pos + 1);
}
