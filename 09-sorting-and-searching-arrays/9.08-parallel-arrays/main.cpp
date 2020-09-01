#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const string OUTFILE_PREFIX = "sorted";
const int WIDTH = 50;

void DisplayWelcomeMesg();
void GetAndSetInputFilename(string&);
void SetOutputFilename(string&);
bool SplitNameScore(const string&, string&, int&);
double ReadFile(const string&, vector<string>&, vector<int>&);
int SortScores(vector<int>&, vector<string>&);
void WriteSortedFile(const string&, const vector<string>&, const vector<int>&);
vector<string> GetBottomStudents(const vector<string>&, const vector<int>&);

int main() {
    // do not change/add anything from here to line 40 below
    string filename;
    vector<string> studentNames, lowestStudents;
    vector<int> studentScores;
    double classAvg;
    int lowestScore;

    DisplayWelcomeMesg();
    GetAndSetInputFilename(filename);

    classAvg = ReadFile(filename, studentNames, studentScores);
    lowestScore = SortScores(studentScores, studentNames);
    lowestStudents = GetBottomStudents(lowestScore, studentNames, studentScores);

    SetOutputFilename(filename);
    WriteSortedFile(filename, studentNames, studentScores);
    // -----------

    // print out the stats by defining a function
    // you choose the name

    return 0;
}

// write the functions below
// all are given except the last one you come up