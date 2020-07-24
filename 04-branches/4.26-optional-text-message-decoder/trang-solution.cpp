#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_str;
    size_t abbrev;

    getline(cin, user_str);
    cout << "Enter text:\n" << user_str << endl
         << "You entered: " << user_str << endl;

    abbrev = user_str.find("IDK");
    if (abbrev != string::npos)
        cout << "IDK: I don't know" << endl;

    abbrev = user_str.find("BFF");
    if (abbrev != string::npos)
        cout << "BFF: best friend forever" << endl;

    abbrev = user_str.find("JK");
    if (abbrev != string::npos)
        cout << "JK: just kidding" << endl;

    abbrev = user_str.find("TMI");
    if (abbrev != string::npos)
        cout << "TMI: too much information" << endl;

    abbrev = user_str.find("TTYL");
    if (abbrev != string::npos)
        cout << "TTYL: talk to you later" << endl;

   return 0;
}