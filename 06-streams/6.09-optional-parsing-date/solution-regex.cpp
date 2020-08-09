#include <iostream>
#include <vector>
#include <fstream>
#include <regex>
using namespace std;

const vector<string> MONTHS = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};
const regex RE_DATE(
    "^(January|February|March|April|May|June|July"
    "|August|September|October|November|December)\\s+"
    "([1-9]|[12][0-9]|3[01])\\s*,\\s*(\\d{1,4})$"
);
inline int MonthToNum(string month) {
    return find(MONTHS.begin(), MONTHS.end(), month) - MONTHS.begin() + 1;
}

int main() {
    const string FILENAME = "dates.txt";
    ifstream inFS;
    string line = "";
    smatch sm;

    inFS.open(FILENAME);
    if (!inFS.is_open()) {
        cout << "Cannot open " << FILENAME << endl;
        return 1;
    }

    while (!inFS.eof() && line != "-1") {
        getline(inFS, line);
        if (inFS.fail() || line == "-1") {
            continue;
        }
        if (regex_match(line, sm, RE_DATE)) {
            cout << MonthToNum(sm[1]) << "/"
                 << sm[2] << "/"
                 << sm[3] << endl;
        }
    }
    inFS.close();

    return 0;
}