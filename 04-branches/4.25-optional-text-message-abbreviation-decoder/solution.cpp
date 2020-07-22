#include <iostream>
#include <string>
using namespace std;

int main()
{
    string abbr;

    cout << "Input an abbreviation:\n";
    cin >> abbr;

    if (abbr == "LOL")
        cout << "laughing out loud\n";
    else if (abbr == "IDK")
        cout << "I don't know\n";
    else if (abbr == "BFF")
        cout << "best friends forever\n";
    else if (abbr == "IMHO")
        cout << "in my humble opinion\n";
    else if (abbr == "TMI")
        cout << "too much information\n";
    else
        cout << "Unknown\n";

    return 0;
}