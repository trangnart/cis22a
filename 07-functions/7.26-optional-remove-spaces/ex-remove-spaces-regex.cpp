#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string line, noSpaces;
    regex space_re("\\s+");

    cout << "Enter a string with lots of spaces everywhere:\n";
    getline(cin, line);

    noSpaces = regex_replace(line, space_re, "");
    cout << noSpaces << endl;
    return 0;
}