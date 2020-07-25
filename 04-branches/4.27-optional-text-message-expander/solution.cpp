#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    size_t pos;

    cout << "Enter text: ";
    getline(cin, text);
    cout << "You entered: " << text << endl;

    pos = text.find("BFF");
    if (pos != string::npos) {
        text.replace(pos, 3, "best friend forever");
    }

    pos = text.find("IDK");
    if (pos != string::npos) {
        text.replace(pos, 3, "I don't know");
    }

    pos = text.find("JK");
    if (pos != string::npos) {
        text.replace(pos, 2, "just kidding");
    }

    pos = text.find("TMI");
    if (pos != string::npos) {
        text.replace(pos, 3, "too much information");
    }

    pos = text.find("TTYL");
    if (pos != string::npos) {
        text.replace(pos, 4, "talk to you later");
    }

    cout << text << endl;

    return 0;
}