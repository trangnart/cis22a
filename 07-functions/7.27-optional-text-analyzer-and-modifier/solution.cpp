#include <iostream>
#include <string>
using namespace std;

int GetNumOfCharacters(const string);
string RemoveSpaces(string);
void OutputWithoutWhitespace(const string&);

int main()
{
    string line = "";

    cout << "Enter a sentence or phrase:\n";
    getline(cin, line);

    cout << "You entered: " << line << endl << endl;

    cout << "Number of characters: "
         << GetNumOfCharacters(line) << endl;

    OutputWithoutWhitespace(line);

    return 0;
}

void OutputWithoutWhitespace(const string& usrStr) {
    string noSpaces = RemoveSpaces(usrStr);

    cout << "String with no whitespace: "
         << noSpaces;
}

int GetNumOfCharacters(const string usrStr)
{
    return usrStr.length();
}

string RemoveSpaces(string userString) {
    string noSpaces = "";
    for (size_t i = 0; i < userString.length(); ++i) {
        if (userString[i] != ' ' && userString[i] != '\t') {
            noSpaces += userString[i];
        }
    }
    return noSpaces;
}
