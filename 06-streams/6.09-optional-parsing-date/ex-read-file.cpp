#include <iostream>
#include <fstream>      // must include this to do stream IO
using namespace std;

int main() {
    // use constants for things that don't change
    const string FILENAME = "example-data.temp";

    ifstream inFS;      // by tradition, the name 'inFS' is used (think cin)
    string line;        // a line of text

    // starts with opening a file for reading
    inFS.open(FILENAME);

    // check if we can't open it then exit main()
    if (!inFS.is_open()) {
        // this is where the constant FILENAME is preferred
        cout << "Cannot open " << FILENAME << endl;
        return 1;
    }

    // read until end-of-file (eof)
    while (!inFS.eof()) {
        // use 'getline' because there will be spaces
        // think: 'inFS' is equivalent to 'cin'
        getline(inFS, line);

        // when we can't read the line (error), skip
        if (inFS.fail()) {
            continue;
        }

        // do something with line (here just print it out)
        // note end-of-line (\n) is stripped by 'getline'
        cout << line << endl;
    }

    // close our file
    inFS.close();

    return 0;
}