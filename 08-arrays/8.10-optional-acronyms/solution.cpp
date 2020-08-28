#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
using namespace std;

string CreateAcronym(const string&);
void ReadAcronyms(const string&);
bool GetAcronymAndName(const string& line, string& acronym, string& name);

int main() {
    const string FILENAME = "input.txt";
    ReadAcronyms(FILENAME);
    return 0;
}

string CreateAcronym(const string& userPhrase) {
    stringstream ss(userPhrase);
    string word,
           acronym = "";

    while (ss >> word) {
        int asciiCode = int(word[0]);
        if (asciiCode >= 64 && asciiCode <= 90) {
            acronym += word[0];
        }
    }
    return acronym;
}

bool GetAcronymAndName(const string& line, string& acronym, string& name) {
    size_t pos = line.find(" - ");
    if (pos == string::npos) {
        return false;
    }
    acronym = line.substr(0, pos);
    name = line.substr(pos + 3);
    return true;
}

void ReadAcronyms(const string& filename) {
    ifstream inFS(filename);
    string line;

    if (!inFS.is_open()) {
        return ;
    }
    cout << setw(45) << right << "Name"
         << setw(10)  << right << "Standard"
         << "   "
         << setw(10)  << left  << "Mine"
         << endl;

    while (!inFS.eof()) {
        getline(inFS, line);
        if (inFS.fail()) {
            continue;
        }
        string acronym, name;
        if (GetAcronymAndName(line, acronym, name)) {
            string myAcronym = CreateAcronym(name);
            string comp = acronym != myAcronym ? " ! " : " = ";
            cout << setw(45) << right << name
                 << setw(10)  << right << acronym
                 << comp
                 << setw(10)  << left  << myAcronym
                 << endl;
        }
    }
    inFS.close();
}