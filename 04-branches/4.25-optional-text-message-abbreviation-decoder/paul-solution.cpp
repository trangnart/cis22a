#include <iostream>
#include <string>
#include <map> // hashtable
using namespace std;

int main()
{
    map<string, string> translate{
        {"LOL", "laughing out loud"},
        {"IDK", "I don't know"},
        {"BFF", "best friends forever"},
        {"IMHO", "in my humble opinion"},
        {"TMI", "too much information"}};
    string abbr,
        text = "Unknown";

    cout << "Input an abbreviation: ";
    cin >> abbr;

    // find abbr in map
    auto search = translate.find(abbr);

    // found something assign it to text
    if (search != translate.end())
        text = translate.at(abbr);

    cout << text << endl;

    return 0;
}
