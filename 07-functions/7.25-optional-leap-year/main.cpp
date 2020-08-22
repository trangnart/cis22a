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
    // Part 1: Implement IsLeapYear()
    cout << IsLeapYear(2020) << endl;
    // remove the above when IsLeapYear working

    // Part 2: Implement ReadYears()
    // const string FILENAME = "input.txt";
    // vector <int> years = ReadYears(FILENAME);

    // Part 3: Implement RemoveNonLeapYears()
    // RemoveNonLeapYears(years);

    // Part 2 & 3: Uncomment the below to see the results
    // for (auto y : years) {
    //    cout << y << endl;
    // }

    return 0;
}

bool IsLeapYear(int userYear)
{
    // part 1
    return false;
}

vector<int> ReadYears(const string &filename)
{
    vector<int> years;
    // part 2
    return years;
}

void RemoveNonLeapYears(vector<int> &years)
{
    // part 3 with IsLeapYear
}