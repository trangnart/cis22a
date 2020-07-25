#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, string> translate{
        {"LOL", "laughing out loud"},
        {"IDK", "I don't know"},
        {"BFF", "best friends forever"},
        {"IMHO", "in my humble opinion"},
        {"TTYL", "talk to you later"},
        {"TMI", "too much information"}};
    string text;
    size_t pos;

    cout << "Enter text: ";
    getline(cin, text);
    cout << "You entered: " << text << endl;

    for (auto const& abbr : translate) {
        do {
            pos = text.find(abbr.first);
            if (pos != string::npos) {
                text.replace(pos, abbr.first.length(), abbr.second);
            }
        } while (pos != string::npos);
    }

    cout << text << endl;

    return 0;
}
