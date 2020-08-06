#include <iostream>
#include <string>
using namespace std;

string get_name (const string& line);
int get_age (const string& line);

int main() {
    string line;

    cout << "Name and age (e.g. Jane , 18):\n";
    getline(cin, line);

    cout << get_name(line) << " is "
        << get_age(line) << " years old!\n";
    return 0;
}

string get_name (const string& line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        // can't find the comma, something is wrong
        return "";
    }
    // find the last character that's not a space
    pos = line.substr(0, pos).find_last_not_of(' ');

    // remember it's length not index
    return line.substr(0, pos+1);
}

int get_age (const string& line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        // can't find the comma, something is wrong
        return -1;
    }
    // remember if you don't supply the length, it assumes to end-of-string
    string number = line.substr(pos+1);

    // find the first character that's not a space
    pos = number.find_first_not_of(' ');

    // turn the string into a number starting where it's not a space
    return stoi(number.substr(pos));
}