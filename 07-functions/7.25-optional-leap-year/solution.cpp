#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

bool IsLeapYear(int userYear);
vector<int> ReadYears(const string& filename);
void RemoveNonLeapYears(vector<int>& years);

int main() {
    const string FILENAME = "input.txt";
    vector <int> years = ReadYears(FILENAME);

    RemoveNonLeapYears(years);

    for (auto y : years) {
        cout << y << endl;
    }

    return 0;
}

bool IsLeapYear(int userYear) {
    bool isDivBy4, isDivBy400, isCenturyYear, isLeapYear;

    // need only isCenturyYear but creating more booleans for clarity
    isCenturyYear = userYear % 100 == 0;
    isDivBy4      = userYear % 4   == 0;
    isDivBy400    = userYear % 400 == 0;
    isLeapYear    = (!isCenturyYear && isDivBy4)
                 || (isCenturyYear && isDivBy400);

    return isLeapYear;
}

vector<int> ReadYears(const string& filename) {
    vector<int> years;
    int year;
    ifstream inFS(filename);
    if (!inFS.is_open()) {
        return years;
    }
    while (!inFS.eof()) {
        inFS >> year;
        if (inFS.fail()) {
            continue;
        }
        years.push_back(year);
    }
    inFS.close();
    return years;
}

void RemoveNonLeapYears(vector<int>& years) {
    vector<int>::iterator it = years.begin();
    do {
        if (IsLeapYear(*it)) {
            it++;                   // skip the leap year
        } else {
            years.erase(it);        // erase the non-leap year
        }
    } while (it != years.end());
}