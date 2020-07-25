#include <iostream>
#include <string>
using namespace std;

int main() {
    string abbrev;
    cout << "Input an abbreviation:" << endl;
    cin >> abbrev;

    if (abbrev == "LOL") {
        cout << "laughing out loud" << endl;
    }
    else if (abbrev == "IDK") {
        cout << "I don't know" << endl;
    }
    else if (abbrev == "BFF") {
        cout << "best friends forever" << endl;
    }
    else if (abbrev == "IMHO") {
        cout << "in my humble opinion" << endl;
    }
    else if (abbrev == "TMI") {
        cout << "too much information" << endl;
    }
    else {
        cout << "Unknown" << endl;
    }
   return 0;
}