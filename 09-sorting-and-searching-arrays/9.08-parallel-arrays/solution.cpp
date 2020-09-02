#include <iostream>
#include <vector>
#include <fstream>
#include <string>
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
void PrintStats(int, double, int, const vector<string>&);

int main() {
    string filename;
    vector<string> studentNames, lowestStudents;
    vector<int> studentScores;
    double classAvg;
    int lowestScore;

    DisplayWelcomeMesg();
    GetAndSetInputFilename(filename);

    classAvg = ReadFile(filename, studentNames, studentScores);
    lowestScore = SortScores(studentScores, studentNames);
    lowestStudents = GetBottomStudents(studentNames, studentScores);

    SetOutputFilename(filename);
    WriteSortedFile(filename, studentNames, studentScores);

    PrintStats(studentNames.size(), classAvg, lowestScore, lowestStudents);

    return 0;
}

void PrintStats(int numStudents,
                double classAvg,
                int lowestScore,
                const vector<string>& lowestStudents) {
    cout << fixed << setprecision(2);
    cout << setfill('.')
         << setw(WIDTH) << left << "Number of Students"
         << numStudents << endl
         << setw(WIDTH) << left << "Class Average"
         << classAvg << endl
         << setw(WIDTH) << left << "Lowest Score"
         << lowestScore << endl
         << setw(WIDTH) << left << "Lowest Students:"
         << setfill(' ') << endl;

    for (auto name : lowestStudents) {
        cout << setw(WIDTH) << "" << name << endl;
    }
}

void DisplayWelcomeMesg() {
    cout << "Welcome!\n"
         << "This program provides exam statistics for a CIS class.\n";
}

void GetAndSetInputFilename(string& fname) {
    cout << "What is the input file's name? ";
    getline(cin, fname);
}

void SetOutputFilename(string& fname) {
    // make first letter uppercase
    fname[0] = toupper(fname[0]);

    // append prefix to filename
    fname = OUTFILE_PREFIX + fname;
}

bool SplitNameScore(const string& line, string& name, int& score) {
    size_t pos = line.find(';');

    // can't find the semi
    if (pos == string::npos) {
        return false;
    }
    name = line.substr(0, pos);
    score = stoi(line.substr(pos+2));
    return true;
}

double ReadFile(const string& fname, vector<string>& names, vector<int>& scores) {
    ifstream inFS(fname);
    string line;
    double totalScore = 0.0,
           average = 0.0;

    if (!inFS.is_open()) {
        return 0;
    }

    while (!inFS.eof()) {
        getline(inFS, line);
        if (inFS.fail()) {
            continue;
        }
        string name;
        int score;
        // split line into name and score
        bool splitOk = SplitNameScore(line, name, score);
        if (splitOk) {
            names.push_back(name);
            scores.push_back(score);
            totalScore += score;
        }
    }
    inFS.close();

    average = totalScore / scores.size();

    return average;
}

int SortScores(vector<int>& scores, vector<string>& names) {
    // use selection sort, once lowest is found, write to new file
    for (size_t i = 0; i < scores.size(); ++i) {
        // look for smallest
        int minIndex = i;
        for (size_t j = i + 1; j < scores.size(); ++j) {
            if (scores[j] < scores[minIndex]) {
                minIndex = j;
            }
        }
        // swap scores
        int smallest = scores[minIndex];
        scores[minIndex] = scores[i];
        scores[i] = smallest;

        // swap names according to scores
        string tmp = names[minIndex];
        names[minIndex] = names[i];
        names[i] = tmp;
    }

    // the lowest score is the first score in the sorted list
    return scores[0];
}

void WriteSortedFile(const string& fname,
                     const vector<string>& names,
                     const vector<int>& scores) {

    ofstream outFS(fname);

    // open file for writing return -1 if can't open
    if (!outFS.is_open()) {
        return;
    }

    // use a for-loop because we are outputting 2 vectors
    for (size_t i = 0; i < names.size(); ++i) {
        outFS << names[i] << "; " << scores[i] << endl;
    }

    outFS.close();
}

vector<string>
GetBottomStudents(const vector<string>& names,
                  const vector<int>& scores) {

    int lowestScore = scores[0];
    vector<string> bottomStudents;

    for (size_t i = 0; i < scores.size(); ++i) {
        if (scores[i] == lowestScore) {
            bottomStudents.push_back(names[i]);
        }
    }
    return bottomStudents;
}