#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

string GetPhoneNumber(const vector<string>& nameVec,
                      const vector<string>& phoneNumberVec,
                      const string& contactName);
void GetNameNumberVectors(const string& line,
                          vector<string>& name,
                          vector<string>& number);

int main() {
    vector<string> names, numbers;
    string line, name;

    getline(cin, line);
    cin >> name;

    GetNameNumberVectors(line, names, numbers);

    string phone = GetPhoneNumber(names, numbers, name);

    cout << phone << endl;

    return 0;
}

string GetPhoneNumber(const vector<string>& nameVec,
                      const vector<string>& phoneNumberVec,
                      const string& contactName) {

    for (size_t i = 0; i < nameVec.size(); ++i) {
        if (nameVec[i] == contactName) {
            return phoneNumberVec[i];
        }
    }
    return "";
}

void GetNameNumberVectors(const string& line,
                          vector<string>& name,
                          vector<string>& number) {
    stringstream ss(line);
    string word;

    for (int counter = 0; ss >> word; ++counter) {
        if (counter % 2) {
            number.push_back(word);
        } else {
            name.push_back(word);
        }
    }
}