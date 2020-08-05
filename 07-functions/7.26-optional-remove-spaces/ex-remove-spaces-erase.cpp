#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    size_t pos;

    cout << "Enter a string with lots of spaces everywhere:\n";
    getline(cin, line);

    do {
        // don't need to set a new pos because the space has been removed
        pos = line.find(' ');
        if (pos != string::npos) {
            // erase 1 character from position
            line.erase(pos,1);
        }
    } while (pos != string::npos);

    cout << line << endl;
    return 0;
}