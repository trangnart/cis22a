#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

bool IsLeapYear(int userYear);
vector<int> ReadYears(const string &filename);
void RemoveNonLeapYears(vector<int> &years);

int main()
{
    const string FILENAME = "input.txt";
    vector <int> years = ReadYears(FILENAME);

    RemoveNonLeapYears(years);

    for (auto y : years) {
        cout << y << endl;
    }

    return 0;
}

bool IsLeapYear(int userYear)
{
    int century_year = userYear % 100 == 0;

    if ((century_year && userYear % 400 == 0) ||
        (!century_year && userYear % 4 == 0)) {

        return true;
    }
    return false;
}

vector<int> ReadYears(const string &filename)
{
    vector<int> years;
    ifstream inFS(filename);

    if (inFS.is_open()) {
        int num;

        while(!inFS.eof()) {
            inFS >> num;

            if (!inFS.fail()) {
                years.push_back(num);
            }
        }
    }
    inFS.close();

    return years;
}

void RemoveNonLeapYears(vector<int> &years)
{
    vector<int>::iterator year = years.begin();
    
    do {
        if (IsLeapYear(*year) == false) {
            years.erase(year);
        }
        else {
            year++;
        }
    } while (year != years.end());
}