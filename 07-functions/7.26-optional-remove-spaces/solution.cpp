#include <iostream>
#include <string>
using namespace std;

string RemoveSpaces(string);
string RemoveSpaces2(string);
string RemoveSpaces3(string);

int main() {
    string line;
    getline(cin, line);
    cout << RemoveSpaces(line) << endl;
    return 0;
}

// iterator
string RemoveSpaces(string userString) {
    for (auto it = userString.begin(); it != userString.end(); ++it) {
        if (*it == ' ') {
            userString.erase(it--);
        }
    }
    return userString;
}

// prescribed by the problem
// find-and-replace
string RemoveSpaces3(string userString) {
    size_t spos = 0;
    while (spos != string::npos) {
        spos = userString.find(' ');
        if (spos != string::npos) {
            userString.replace(spos, 1, "");
        }
    }
    return userString;
}

// long way to solve the same problem
// show how to use range-based string loop
string RemoveSpaces2(string userString) {
    string noSpaces = "";
    for ( auto c : userString ) {
        if (c != ' ' && c != '\t') {
            noSpaces += c;
        }
    }
    return noSpaces;
}