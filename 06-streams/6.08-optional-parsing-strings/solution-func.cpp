#include <iostream>
#include <string>
using namespace std;

string trim(string line);
string get_right(string line);
string get_left(string line);

int main() {
    string name, first, last;

    do {
        cout << "Enter input string:\n";
        getline(cin, name);
        if (name.find(',') != string::npos) {
            cout << "First word: \"" << get_left(name) << "\"\n";
            cout << "Second word: \"" << get_right(name) << "\"\n";
        } else if (name != "q") {
            cout << "Error: No comma in string.\n";
        }
        cout << endl;
    } while (name != "q");

    return 0;
}

string get_right(string line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        return "";
    }
    return trim(line.substr(pos+1, line.length() - pos - 1));
}

string get_left(string line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        return "";
    }
    return trim(line.substr(0, pos));
}

string trim(string line) {
    //         012345678
    // line = "***JANE**"
    // beg=3------^  ^-----end=6

    size_t beg = line.find_first_not_of(' ');   // 3

    // nothing that is not a * (bad)
    if (beg == string::npos) {
        return "";
    }

    // it's ok if there's no '*' at the end
    size_t end = line.find_last_not_of(' ');    // 6
    size_t len = end - beg + 1;
    string name = line.substr(beg, len);
    return name;
}