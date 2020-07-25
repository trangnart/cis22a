#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_str;
    size_t IDK, BFF, TMI, TTYL, JK;
    getline(cin, user_str);
    cout << "Enter text:\n" << user_str << endl
         << "You entered: " << user_str << endl
         << "Expanded: ";

    IDK = user_str.find("IDK", IDK);
    if (IDK != string::npos) {
        user_str.replace(IDK,3,"I don't know");
        cout << user_str << endl;
    }
    BFF = user_str.find("BFF", BFF);
    if (BFF != string::npos) {
        user_str.replace(BFF,3,"best friend forever");
        cout << user_str << endl;
    }

    TMI = user_str.find("TMI", TMI);
    if (TMI != string::npos) {
        user_str.replace(TMI,3,"too much information");
        cout << user_str << endl;
    }
    TTYL = user_str.find("TTYL",TTYL);
    if (TTYL != string::npos) {
        user_str.replace(TTYL,4,"talk to you later");
        cout << user_str << endl;
    }
    JK = user_str.find("JK", JK);
    if (JK != string::npos) {
        user_str.replace(JK,2,"just kidding");
        cout << user_str << endl;
    }

   return 0;
}