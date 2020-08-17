#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

bool file_exists(const string& name);
string get_name(const string& line);
int get_number(const string& line);
int CollectInputData(const string& filename);
void OutputTable(const string& filename);
void OutputGraph(const string& filename);

int main() {
    const string FILENAME = "novels.txt";

    if (!file_exists(FILENAME)) {
        // ask for input and write to file
        int count = CollectInputData(FILENAME);
        if (count <= 0) {
            cout << "No data found\n";
            return 1;
        }
    }

    OutputTable(FILENAME);
    OutputGraph(FILENAME);

    return 0;
}

void OutputGraph(const string& filename) {
    string line;
    size_t count = 0;
    ifstream inFS(filename);

    if (inFS.bad()) {
        cout << "Cannot read " << filename << endl;
        return;
    }

    while (!inFS.eof()) {
        getline(inFS, line);

        // skip if fail or first 3 lines
        if (inFS.fail() || count++ < 3) {
            continue;
        }

        // print author right justified setw(20)
        cout << setfill(' ') << setw(20) << right << get_name(line) << " "
             << setfill('*') << setw(get_number(line)) << "" << endl;
    }

    inFS.close();
}

void OutputTable(const string& filename) {
    string line;
    size_t count = 0;
    ifstream inFS(filename);

    if (inFS.bad()) {
        cout << "Cannot read " << filename << endl;
        return;
    }

    while (!inFS.eof()) {
        getline(inFS, line);

        if (inFS.fail()) {
            continue;
        }
        if (count == 0) {
            // title setw(33) right justified
            cout << setw(33) << right << line << endl;
        }
        else if (count == 1) {
            // left header setw(20) left justified
            cout << setw(20) << left << line << "|";
        }
        else if (count == 2) {
            cout << setw(23) << right << line << endl;
            // print line
            cout << setfill('-') << setw(44) << "" << endl;
            // reset fill to space
            cout << setfill(' ');
        }
        else {
            cout << setw(20) << left << get_name(line) << "|";
            cout << setw(23) << right << get_number(line) << endl;
        }
        ++count;
    }
    inFS.close();
}

/* Read from user's input and write out to file
   Returns number of data points it received.
   If error, returns -1
   */
int CollectInputData(const string& filename) {
    string line;
    size_t count = 0;
    ofstream outFS(filename);

    if (outFS.bad()) {
        cout << "Cannot open " << filename << " for output\n";
        return -1;
    }

    cout << "Enter a title for the data:\n";
    getline(cin, line);

    cout << "You entered: " << line << endl;    // output to console
    outFS << line << endl;                      // output to file

    for (int i=1; i <= 2; ++i) {
        cout << "Enter the column " << i << " header:\n";
        getline(cin, line);
        cout << "You entered: " << line << endl << endl;
        outFS << line << endl;                  // output to file
    }

    while (line != "-1") {
        cout << "Enter a data point (-1 to stop input):\n";
        getline(cin, line);

        // don't write -1 to the file nor output it
        if (line == "-1") {
            continue;
        }

        cout << line << endl;

        string name = get_name(line);
        int number = get_number(line);

        cout << "Data string: " << name << endl;
        cout << "Data integer: " << number << endl;

        // write output file reformat it so it is cleaned
        outFS << name << ", " << number << endl;

        ++count;                                // how many did we read?
    }
    // close the file
    outFS.close();

    // return number of data lines (positive integer)
    return count;
}

/* Using ifstream to check if the file exist.
   Pass by reference (string&) because it's more efficient.
   You can pass it by value but it will use more memory.
   */
bool file_exists(const string& name) {
    ifstream f(name);       // create stream and open file
    return f.good();        // check if it can be opened
}

string get_name(const string& line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        return "";
    }
    pos = line.substr(0, pos).find_last_not_of(' ');
    return line.substr(0, pos+1);           // remember length not index
}

int get_number(const string& line) {
    size_t pos = line.find(',');
    if (pos == string::npos) {
        return -1;
    }
    string number = line.substr(pos+1);     // skip the comma
    pos = number.find_first_not_of(' ');    // skip any spaces
    return stoi(number.substr(pos));        // turn it into a number
}