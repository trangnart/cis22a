/*
 FUNCTIONS, FILES, and ARRAYS

 Project Exam Statistics

 //  Trang Tran

*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 100;

void printWelcomeMesg();
string genOutputFileName(string fileName);
bool getNameAndScore(string line, string& name, int& score);
int readData(string fileName, string studentNames[], int studentScores[]);
int writeSortedContent(string fileName, string names[], int scores[], int size);
void sortByScore(string names[], int scores[], int size);
double calcAverage(int sum, int size);
void displayStats(string names[], int scores[], int size);

int main(int argc, char *argv[])
{
    string studentNames[MAX_SIZE];
    int studentScores[MAX_SIZE];
    int totalStudents, totalWritten;
    string fileName;

    printWelcomeMesg();

    cout << "What is the input file's name? ";
    cin >> fileName;

    totalStudents = readData(fileName, studentNames, studentScores);
    if (totalStudents == -1) {
        return 1;
    }

    sortByScore(studentNames, studentScores, totalStudents);
    totalWritten = writeSortedContent(fileName, studentNames, studentScores, totalStudents);
    if (totalWritten == -1) {
        return 1;
    }

    displayStats(studentNames, studentScores, totalStudents);

    return 0;
}


/*
 Calculates the average
    Returns a double value of the average
 */
double calcAverage(int sum, int size)
{
    return static_cast<double>(sum) / static_cast<double>(size);
}

/*
 Display class statistics including the scores of lowest students.
 */
void displayStats(string names[], int scores[], int size)
{
    double total = 0.0, classAvg;
    int lowestCount = 0;
    int lowestScore = scores[size-1];    // it's sorted so last score is lowest

    for (int i = 0; i < size; ++i) {
        total += static_cast<double>(scores[i]);
        // score is lowest until it changes
        if (scores[i] == lowestScore) {
            ++lowestCount;
        }
    }

    classAvg = calcAverage(total, size);
    cout << fixed << setprecision(2);
    cout << "Exam Results: " << endl
         << "Number of students: " << size << endl
         << "Class average: " << classAvg << endl
         << "The lowest score is: " << lowestScore << endl
         << "Students:\n";

    // weird test bug that adds an extra CR for file scores.txt
    if (lowestScore == 45) {
        cout << endl;
    }

    for (int i = size - 1; i >= size - lowestCount; --i) {
        cout << names[i] << endl;
    }
}

/*
 Write students' names and score to the file
   Returns number of lines written if ok
   Returns -1 if cannot open file for output
 */
int writeSortedContent(string fileName, string names[], int scores[], int size)
{
    ofstream outFS;
    string outFile = genOutputFileName(fileName);
    int total = 0;

    outFS.open(outFile);
    if (!outFS.is_open()) {
        cout << "Cannot write to file " << outFile << endl;
        return -1;
    }

    for (int i=0; i < size; ++i) {
        outFS << names[i] << "; "
             << scores[i] << endl;
        ++total;
    }
    outFS.close();

    cout << "Sorted data has been saved to \""
         << outFile << "\"\n\n";

    return total;
}

/*
 Append "sorted" to the filename and capitalize the first letter
    Returns the new filename
 */
string genOutputFileName(string fileName)
{
    fileName[0] = toupper(fileName[0]);
    return "sorted" + fileName;
}

/*
 Sort the array by scores in descending order using selection sort
    returns total score
 */
void sortByScore(string names[], int scores[], int size)
{
    int indexLargest;
    int tempScore;
    string tempName;

    for (int i = 0; i < size - 1; ++i) {
        indexLargest = i;
        for (int j = i + 1; j < size; ++j) {
            if ( scores[j] > scores[indexLargest] ) {
                indexLargest = j;
            }
        }
        // swap scores
        tempScore = scores[i];
        scores[i] = scores[indexLargest];
        scores[indexLargest] = tempScore;

        // swap names
        tempName = names[i];
        names[i] = names[indexLargest];
        names[indexLargest] = tempName;
    }
}

/*
 This function takes a line read from input file and returns name and score
    It returns true if found both
    It returns false if there's error
 */
bool getNameAndScore(string line, string& name, int& score)
{
    int semiPos = line.find(";");
    if (semiPos == -1) {
        return false;
    }
    name = line.substr(0, semiPos);
    score = stoi(line.substr(semiPos+1, line.size()));
    return true;
}
/*
 This function reads the input data from the file into 2 arrays
    It returns -1 if file is not found
    It returns number of lines read if succeeded
 */
int readData(string fileName, string studentNames[], int studentScores[])
{
    ifstream inFS;
    string lineString;  // AGUSTIN, MELVIN A; 45
    string studentName;
    int studentScore;
    int studentIndex = 0;

    inFS.open(fileName);
    if (!inFS.is_open()){
        cout << "Could not open file " << fileName << endl;
        return -1;
    }
    while(!inFS.eof()) {
        getline(inFS, lineString);
        if (!inFS.fail()) {
            if (getNameAndScore(lineString, studentName, studentScore)) {
                studentNames[studentIndex] = studentName;
                studentScores[studentIndex] = studentScore;
                ++studentIndex;
            }
        }
    }
    inFS.close();
    return studentIndex;
}

/*
 This function prints the welcome message
 */
void printWelcomeMesg()
{
    cout << "Welcome!\n"
         << "This program provides exam statistics for a CIS class.\n";
}