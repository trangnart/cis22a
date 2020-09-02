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
void outputScreen(const int&, const double&, const vector<string>&, const vector<string>&);

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

    outputScreen(lowestScore, classAvg, studentNames, lowestStudents);

    return 0;
}

void DisplayWelcomeMesg() {
    cout << "This program provides exam statistics for a CIS class.\n";
}

void GetAndSetInputFilename(string& filename) {
    cout << "What is the input file's name? ";
    getline(cin, filename);
}

bool SplitNameScore(const string& line, string& name, int& score) {
    size_t pos = line.find(";");

    if (pos != string::npos) {
        name = line.substr(0, pos);
        score = stoi(line.substr(pos+2));

        return true;
    }
    return false;
}

double ReadFile(const string& filename,
                vector<string>& studentNames,
                vector<int>& studentScore) {

    ifstream inFS(filename);
    string line, name;
    int score;
    double total = 0.00;

    if (inFS.is_open()) {
        while(!inFS.eof()) {
            getline(inFS, line);

            if (!inFS.fail()) {
                if (SplitNameScore(line, name, score)) {
                    studentNames.push_back(name);
                    studentScore.push_back(score);
                    total += score;
                }
            }
        }
    }
    int studentNum = studentNames.size();
    inFS.close();

    return total / studentNum;
}

int SortScores(vector<int>& score, vector<string>& name) {
    int size = score.size();
    int smallest;

    for (int i = 0; i < size; i++) {
        smallest = i;

        for (int j = i + 1; j < size; j++) {
            if (score[j] < score[smallest]) {
                smallest = j;
            }
        }
        int temp1 = score[smallest];
        score[smallest] = score[i];
        score[i] = temp1;

        string temp2 = name[smallest];
        name[smallest] = name[i];
        name[i] = temp2;
    }
    return score[0];
}

vector<string> GetBottomStudents(const vector<string>& name,
                                 const vector<int>& score) {
    vector<string> bottom;
    int size = score.size();

    for (int i = 0; i < size; i++){
        if (score[0] == score[i]){
            bottom.push_back(name[i]);
        }
    }
    return bottom;
}

void SetOutputFilename(string& filename) {
    filename[0] = toupper(filename[0]);
    filename = OUTFILE_PREFIX + filename;
}

void WriteSortedFile(const string& filename,
                     const vector<string>& name,
                     const vector<int>& score) {
    int size = score.size();
    ofstream outFS(filename);

    if (outFS.is_open()) {
        for (int i = 0; i < size; i++) {
            outFS << name[i] << "; " << score[i] << endl;
        }
    }
    outFS.close();
}

void outputScreen(const int& lowestScore, const double& classAvg,
                  const vector<string>& name,
                  const vector<string>& lowestStudent) {
    cout << setfill('.');
    cout << "Number of Students" << setw(29) << name.size() << endl;

    cout << "Class Average" << setw(37)
         << fixed << setprecision(2) << classAvg << endl;

    cout << "Lowest Score" << setw(35) << lowestScore << endl;

    cout << "Lowest Students:" << setw(30) << ' ' << endl;

    cout << setfill(' ');
    for (auto e : lowestStudent) {
        cout << setw(45) << "" << e << endl;
    }
}
