#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, lastName, firstName;
    size_t pos;

    do {
        cout << "Enter input string:" << endl;
        getline(cin, name);
        pos = name.find(",");

        if (pos != string::npos) {
            firstName = name.substr(0,pos);
            lastName = name.substr(pos + 1, name.length() - pos - 1);
            pos = firstName.find_last_not_of(' ');
            firstName = firstName.substr(0, pos+1);
            pos = lastName.find_first_not_of(' ');
            lastName = lastName.substr(pos, lastName.length() - pos);

            cout << "First word: \"" << firstName << "\"" << endl;
            cout << "Second word \"" << lastName << "\"" << endl;
        }

        else if (name != "q") {
            cout << "Error: No comma in string." << endl;
        }

        cout << endl;

    } while (name != "q");

   return 0;
}