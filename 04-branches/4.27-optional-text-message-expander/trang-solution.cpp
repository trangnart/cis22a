#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_str;
    size_t pos;

    cout << "Enter text:" << endl;
    getline(cin, user_str);
    cout << "You entered: " << user_str << endl << "Expanded: ";

    pos = user_str.find("IDK");
    if (pos != string::npos) {
        user_str.replace(pos,3,"I don't know");
    }

    pos = user_str.find("BFF");
    if (pos != string::npos) {
        user_str.replace(pos,3,"best friend forever");
    }

    pos = user_str.find("TMI");
    if (pos != string::npos) {
        user_str.replace(pos,3,"too much information");
    }

    pos = user_str.find("TTYL");
    if (pos != string::npos) {
        user_str.replace(pos,4,"talk to you later");
    }

    pos = user_str.find("JK");
    if (pos != string::npos) {
        user_str.replace(pos,2,"just kidding");
    }

    cout << user_str << endl;

   return 0;
}