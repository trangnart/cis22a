#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const string FILENAME = "example-data.temp";

    ofstream outFS;     // by tradition, the name 'outFS' is used (think cout)
    string line;        // a line of text

    // starts with opening a file for writing
    outFS.open(FILENAME);

    // check if we can't open it then exit main()
    if (!outFS.is_open()) {
        cout << "Cannot open " << FILENAME << endl;
        return 1;
    }

    // now 'outFS' is like 'cout' you can use it the same way

    cin << "Enter a line of text\n";
    getline(cin, line);

    // writing to the FILENAME
    // check FILENAME for content of what you just written
    outFS << line << endl;

    outFS.close();

    return 0;
}