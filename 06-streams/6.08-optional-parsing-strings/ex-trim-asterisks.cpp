#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter string (e.g. ***JANE**):\n";
    getline(cin, line);

    //         012345678
    // line = "***JANE**"
    // beg=3------^  ^-----end=6

    size_t beg = line.find_first_not_of('*');   // 3

    // nothing that is not a * (bad)
    if (beg == string::npos) {
        cout << "String \"" << line << "\" is invalid\n"
             << "Enter a string surrounded by '*'\n";
        return 1;
    }

    // it's ok if there's no '*' at the end
    size_t end = line.find_last_not_of('*');    // 6
    size_t len = end - beg + 1;
    string name = line.substr(beg, len);

    cout << name << endl;

    return 0;
}