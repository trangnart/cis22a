#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

bool file_exists(const string& name);
int CollectInputData(const string& filename);
string get_name(const string& line);
int get_number(const string& line);
void OutputTable(const string& filename);
void OutputGraph(const string& filename);

int main() {
    const string FILENAME = "novels.txt";
    ifstream inFS;

    if (!file_exists(FILENAME)) {
        CollectInputData(FILENAME);
    }

    OutputTable(FILENAME);
    OutputGraph(FILENAME);
    return 0;
}
void OutputGraph(const string& filename) {
    string line;
    int count = 0;
    ifstream inFS;
    inFS.open(filename);
    if (!inFS.is_open()) {
        return;
    }
    while (!inFS.eof()) {
        getline(inFS, line);
        if (!inFS.fail() && count > 1) {
            cout << setfill(' ') << setw(20) << right << get_name(line) << " ";
            cout << setfill('*') << setw(get_number(line)) << "" << endl;
        }
        ++count;
    }
    inFS.close();
    return;
}
void OutputTable(const string& filename) {
    string title, header1, header2, line;
    ifstream inFS;

    inFS.open(filename);
    if (!inFS.is_open()) {
        return;
    }
    getline(inFS, title);
    getline(inFS, header1);
    getline(inFS, header2);

    cout << setw(33) << right << title << endl;
    cout << setw(20) << left << header1 << "|";
    cout << setw(23) << right << header2 << endl;
    cout << setfill('-') << setw(44) << "" << endl;

    while (!inFS.eof()) {
        getline(inFS, line);

        if (inFS.fail()) {
            continue;
        }
        cout << setfill(' ') << setw(20) << left << get_name(line) << "|";
        cout << setw(23) << right << get_number(line) << endl;
    }
    inFS.close();
    return;
}
int CollectInputData(const string& filename) {
    ofstream outFS;
    string title, header1, header2, data_pt, line;
    int count = 0;

    outFS.open(filename);
    if (!outFS.is_open()) {
        cout << "Cannot open novels.txt" << endl;
        return 1;
    }
    cout << "Enter a title for the data:" << endl;
    getline(cin, title);
    cout << "You entered: " << title << endl << endl;
    outFS << title << endl;

    cout << "Enter the column 1 header:" << endl;
    getline(cin,header1);
    outFS << header1 << endl;
    cout << "You entered: " << header1 << endl << endl;

    cout << "Enter the column 2 header:" << endl;
    getline(cin,header2);
    outFS << header2 << endl;
    cout << "You entered: " << header2 << endl << endl;

    while (data_pt != "-1") {
        cout << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, data_pt);
        // James Th, 6
        if (data_pt != "-1") {
            cout << "Data string: " << get_name(data_pt) << endl;
            cout << "Data integer :" << get_number(data_pt) << endl;
            outFS << data_pt << endl;

            ++count;
        }
    }
    outFS.close();
    return count;
}
string get_name(const string& line) {
    size_t pos = line.find(",");
    if (pos == string::npos) {
        return "";
    }

    return line.substr(0,pos);
}
int get_number(const string& line) {
    size_t pos = line.find(",");
    if (pos == string::npos) {
        return -1;
    }
    string num = line.substr(pos+1);

    return stoi(num);
}
bool file_exists(const string& name) {
    ifstream f(name);
    return f.good();
}