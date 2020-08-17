#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// Step 1: this is given for you
bool file_exists(const string& name);

// Step 2: uncomment the below
int CollectInputData(const string& filename);

// Step 3: uncomment the below
string get_name(const string& line);
int get_number(const string& line);

// Step 4: uncomment the below
void OutputTable(const string& filename);

// Step 5: uncomment the below
void OutputGraph(const string& filename);

int main() {
    // define a constant for file novels.txt
    const string FILENAME = "novels.txt";
    ifstream inFS;
    // Step 1: check if the file doesn't exist do something
    if (!file_exists(FILENAME)) {
        CollectInputData(FILENAME);
         // Step 2: implement CollectInputData() and call it
         // to get input and create the novels.txt file
    }
    // Step 3: implement get_name() and get_number()
    // call these in the functions below

    // Step 4: implement and call OutputTable()
    OutputTable(FILENAME);
    // Step 5: implement and call OutputGraph()
    OutputGraph(FILENAME);
    return 0;
}
/* Step 5
   Read novels.txt and output the graph per author
   */
void OutputGraph(const string& filename) {
    // 5.1 open file for reading check if it's bad then return;
    string line;
    ifstream inFS;

    inFS.open(filename);
    if (!inFS.is_open()) {
        return;
    }
    // 5.2 read the file line by line
    while (!inFS.eof()) {
        getline(inFS, line);
    // 5.3 skip if fail to read line and if it's first 3 lines
        if (inFS.fail()) {
            continue;
        }
    // 5.4 setw(20) and right justify the author's name
        cout << setw(20) << right << get_name(line) << " ";
    // 5.5 write one '*' for every book written
        int a = get_number(line);
        for (int i = 0; i < a; ++i) {
            cout << "*";
        }
        cout << endl;
    }
    // 5.6 close file
    inFS.close();
    return;
}

/* Step 4:
   Open the file and print the content according to spec.
   */
void OutputTable(const string& filename) {
    // 4.1 open file to read
    string title, header1, header2, line;
    ifstream inFS;      // by tradition, the name 'inFS' is used (think cin)
    // 4.2 if it's bad return nothing "return;"
    inFS.open(filename);
    if (!inFS.is_open()) {
        return;
    }
    getline(inFS, title);
    getline(inFS, header1);
    getline(inFS, header2);
    // 4.5 first line is title setw(33) and right justify
    cout << setw(33) << right << title << endl;
    // 4.6 else if it's second line setw(20) and left justify
        cout << setw(20) << left << header1 << "|"
    // 4.7 else if it's third line setw(23) and right justify
             << setw(23) << right << header2 << endl;
    // 4.8 write the line using setfill('-') and setw(44)
        cout << setfill('-') << setw(44) << "" << endl;
    // 4.3 read until 'eof()'
    while (!inFS.eof()) {
    // 4.4 check if failed to read and skip
        getline(inFS, line);

        if (inFS.fail()) {
            continue;
        }

    // 4.8 setw(20) left justify and call get_name()
        cout << setfill(' ') << setw(20) << left << get_name(line) << "|"
    // 4.9 setw(23) right justify and call get_number()
             << setw(23) << right << get_number(line) << endl;
    }
    // 4.10 close file
    inFS.close();
    return;
}

/* Step 2:
   Read from user's input and write out to file
   Returns number of data points it received.
   If error, returns -1
   */
int CollectInputData(const string& filename) {
    // 2.1 open file for writing
    ofstream outFS;
    string title, header1, header2, data_pt, data_str, data_int;
    int count = 0;
    outFS.open("novels.txt");
    // 2.2 if can't open file exit
    if (!outFS.is_open()) {
        cout << "Cannot open";
        return 1;
    }
    // 2.3 get input for title, header 1&2 and output to screen & novels.txt
    cout << "Enter a title for the data:" << endl;
    getline(cin, title);
    cout << "You entered: " << title << endl;
    outFS << title << endl;

    cout << "Enter the column 1 header:" << endl;
    getline(cin,header1);
    outFS << header1 << endl;
    cout << "You entered: " << header1 << endl << endl;

    cout << "Enter the column 2 header:" << endl;
    getline(cin,header2);
    outFS << header2 << endl;
    cout << "You entered: " << header2 << endl << endl;
    // 2.4 get data points until -1 write to cout and novels.txt
    while (data_pt != "-1") {
        cout << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, data_pt);
        if (data_pt != "-1") {
            size_t pos = data_pt.find(",");
            data_str = data_pt.substr(0,pos);
            cout << "Data string: " << data_str << endl;
            data_int = data_pt.substr(pos+1);
            cout << "Data integer:" << data_int << endl;
            outFS << data_pt << endl;

            ++count;
        }

    }
    // 2.5 close file
    outFS.close();
    // 2.6 return number of lines written
    return count;
}

/* Step 3:
   Input: "Jane Austin, 20"
   Output: "Jane Austin"
   Remove any spaces AFTER the name if exists.
   */
string get_name(const string& line) {
    string name;
    // 3.1 find the comma, returns empty string if not found
    size_t pos = line.find(",");
    if (pos == string::npos) {
        return "";
    }
    // 3.2 find last character not a ' '
    name = line.substr(0,pos);
    // 3.3 return string upto the last non space character
    return name;
}

/* Step 3: continue
   Input: "Jane Austin, 20"
   Output: 20
   Remove any spaces BEFORE the number if exists.
   */
int get_number(const string& line) {
    // 3.4 find the comma, return -1 if not found
    size_t pos = line.find(",");
    if (pos == string::npos) {
        return -1;
    }
    // 3.5 store the string after the comma

    // 3.6 find first character not a space
    string integer = line.substr(pos+1);
    // 3.7 use stoi() to return the integer representing books
    return stoi(integer);
}

/* Using ifstream to check if the file exist.
   Pass by reference (string&) because it's more efficient.
   You can pass it by value but it will use more memory.
   */
bool file_exists(const string& name) {
    ifstream f(name);       // create stream and open file
    return f.good();        // check if it can be opened
}