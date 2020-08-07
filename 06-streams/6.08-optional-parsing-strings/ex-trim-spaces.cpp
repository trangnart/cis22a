#include <iostream>
#include <string>
using namespace std;

string trim(string name);
string lastName(string name);
string firstName(string name);

int main() {
    string name;
    do {
        cout << "Enter input string:" << endl;
        getline(cin, name);

        size_t pos = name.find(',');
        if (pos != string::npos) {
            cout << "First word: \"" << trim(firstName(name)) << "\"" << endl;
            cout << "Second word \"" << trim(lastName(name)) << "\"" << endl;
        }

        else if (name != "q") {
            cout << "Error: No comma in string." << endl;
        }

        cout << endl;

    } while (name != "q");
    
    return 0;
}

string lastName(string name) {
    size_t pos = name.find(',');
    if (pos == string::npos) {
        return "";
    }
    return name.substr(pos+1, name.length() - pos - 1);
}

string firstName(string name) {
    size_t pos = name.find(',');
    if (pos == string::npos) {
        return "";
    }
    return name.substr(0, pos);
}

string trim(string name) {
    //         012345678
    // line = "***JANE**"
    // beg=3------^  ^-----end=6

    size_t beg = name.find_first_not_of(' ');   // 3

    // nothing that is not a * (bad)
    if (beg == string::npos) {
        return "";
    }

    // it's ok if there's no '*' at the end
    size_t end = name.find_last_not_of(' ');    // 6
    size_t len = end - beg + 1;
    string line = name.substr(beg, len);
    return line;
}