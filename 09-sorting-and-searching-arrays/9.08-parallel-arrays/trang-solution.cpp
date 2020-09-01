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

    string line, name;
    int score;
    getline(cin, line);
    SplitNameScore(line, name, score);
    cout << "Name: [" << name << "]" << endl
         << "Score: " << "[" << score << "]" << endl;
         
   // DisplayWelcomeMesg();
   // GetAndSetInputFilename(filename);

    classAvg = ReadFile(filename, studentNames, studentScores);
    cout << "Class Average: " << classAvg << endl;
    //lowestScore = SortScores(studentScores, studentNames);
   // lowestStudents = GetBottomStudents(lowestScore, studentNames, studentScores);

   // SetOutputFilename(filename);
   // WriteSortedFile(filename, studentNames, studentScores);
    // -----------

    // print out the stats by defining a function
    // you choose the name

    return 0;
}

void DisplayWelcomeMesg() {
    cout << "This program provides exam statistics for a CIS class." << endl;
}

void GetAndSetInputFilename(string& filename) {
    cout << "What is the input file's name? ";
    getline(cin, filename);
    const string FILENAME = filename;
}

bool SplitNameScore(const string& line, string& name, int& score) {
    size_t pos = line.find(";");

    if (pos != string::npos) {
        name = line.substr(0, pos);
        score = stoi(line.substr(pos+1));

        return true;
    }
    return false;
}

double ReadFile(const string& filename, vector<string>& studentNames, vector<int>& studentScore) {
    ifstream inFS(filename);
    string line, name;
    int score, studentNum = 0;
    int sum = 0;

    if(inFS.is_open()) {

        while(!inFS.eof()) {
            inFS >> line;

            if (!inFS.fail()) {
                if (SplitNameScore(line, name, score)) {
                    studentNames.push_back(name);
                    studentNum++;
                    studentScore.push_back(score);
                    sum += sum;
                }
            }
        }

    }
    inFS.close();
    return static_cast<double>(sum / studentNum);
}
// write the functions below
// all are given except the last one you come up