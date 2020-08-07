#include <iostream>
#include <string>
using namespace std;

string trim(string line);
string get_right(string line);
string get_left(string line);

int main() {
    string line;
    cout << "Enter string (e.g. ***JANE**):\n";
    getline(cin, line);

    size_t pos = line.find(',');
    if (pos != string::npos) {
        cout << "Hello "
             << trim(get_left(line))
             << " "
             << trim(get_right(line))
             << "!\n";
    }

    return 0;
}

string get_right(string line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        return "";
    }
    return line.substr(pos+1, line.length() - pos - 1);
}

string get_left(string line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        return "";
    }
    return line.substr(0, pos);
}

string trim(string line) {
    //         012345678
    // line = "***JANE**"
    // beg=3------^  ^-----end=6

    size_t beg = line.find_first_not_of('*');   // 3

    // nothing that is not a * (bad)
    if (beg == string::npos) {
        return "";
    }

    // it's ok if there's no '*' at the end
    size_t end = line.find_last_not_of('*');    // 6
    size_t len = end - beg + 1;
    string name = line.substr(beg, len);
    return name;
}