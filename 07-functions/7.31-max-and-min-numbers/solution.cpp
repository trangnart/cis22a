#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <iterator>
using namespace std;

vector<int> StringToVector(const string&);
void NoMaxMin(const string&);
void RemoveMinMax(vector<int>&);
string OutputLine(const string&);

int main() {
    const string FILENAME = "input.txt";
    NoMaxMin(FILENAME);

    return 0;
}

void NoMaxMin(const string& filename) {
    ifstream inFS(filename);

    if (inFS.is_open()) {
        string line;
        while (!inFS.eof()) {
            getline(inFS, line);
            if (!inFS.fail()) {
                cout << OutputLine(line) << endl;
            }
        }
    }
    inFS.close();
}

vector<int> StringToVector(const string& sentence) {
    stringstream ss(sentence);
    vector<int> vec;
    int num;

    while (ss >> num) {
        vec.push_back(num);
    }

    return vec;
}

void RemoveMinMax(vector<int>& vec) {
    vec.erase(min_element(vec.begin(), vec.end()));
    vec.erase(max_element(vec.begin(), vec.end()));
}

string OutputLine(const string& numList) {
    stringstream ss;
    ostringstream oss;
    vector<int> numbers = StringToVector(numList);

    RemoveMinMax(numbers);

    // convert vector to a space-delimited string
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(oss, " "));

    ss << setw(30) << numList << " -> " << oss.str();

    return ss.str();
}