#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_str;
    size_t IDK, BFF, JK, TMI, TTYL;

    getline(cin, user_str);
    cout << "Enter text:\n" << user_str << endl
         << "You entered: " << user_str << endl;

    IDK = user_str.find("IDK");
    if (IDK != string::npos)
        cout << "IDK: I don't know" << endl;

    BFF = user_str.find("BFF");
    if (BFF != string::npos)
        cout << "BFF: best friend forever" << endl;

    JK = user_str.find("JK");
    if (JK != string::npos)
        cout << "JK: just kidding" << endl;

    TMI = user_str.find("TMI");
    if (TMI != string::npos)
        cout << "TMI: too much information" << endl;
        
    TTYL = user_str.find("TTYL");
    if (TTYL != string::npos)
        cout << "TTYL: talk to you later" << endl;

   return 0;
}