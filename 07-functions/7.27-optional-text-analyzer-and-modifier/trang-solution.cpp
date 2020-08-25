#include <iostream>
#include <string>
using namespace std;

int GetNumOfCharacters(const string usrStr);
string OutputWithoutWhitespace(string usrStr);

int main()
{
    string usrStr;

    cout << "Enter a sentence or phrase:" << endl;
    getline(cin, usrStr);
    cout << endl << "You entered: " << usrStr << endl;

    cout << endl << "Number of characters: "
         << GetNumOfCharacters(usrStr) << endl;
         
    cout << "String with no whitespace: "
         << OutputWithoutWhitespace(usrStr) << endl;

    return 0;
}

int GetNumOfCharacters(const string usrStr)
{
    int count = 0;

    for (auto i = usrStr.begin(); i != usrStr.end(); i++) {
        count++;
    }
    return count;
}

string OutputWithoutWhitespace(string usrStr)
{
    for (auto i = usrStr.begin(); i != usrStr.end(); ++i) {
        if (*i == ' ') {
            usrStr.erase(i--);
        }
    }
    return usrStr;
}
