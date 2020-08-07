#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, first, last;

    // prompt user until 'q' and valid string is found
    do {
        cout << "Enter input string:\n";
        getline(cin, name);

        size_t pos = name.find(',');

        // found a comma
        if (pos != string::npos) {
            first = name.substr(0, pos);
            last = name.substr(pos+1, name.length() - pos - 1);

            // does first have ending spaces?
            pos = first.find_last_not_of(' ');
            // trim the ending space(s)
            first = first.substr(0, pos+1);

            // does last have beginning spaces?
            pos = last.find_first_not_of(' ');
            if (pos > 0) {
                // trim beginning spaces
                last = last.substr(pos, last.length() - pos);
            }

            cout << "First word: \"" << first << "\"\n";
            cout << "Second word: \"" << last << "\"\n";
        } else if (name != "q") {
            cout << "Error: No comma in string.\n";
        }
        cout << endl;
    } while (name != "q");

    return 0;
}