#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void GetNameNumberVectors(const string &line,
                          vector<string> &name,
                          vector<string> &number);
string GetPhoneNumber(const vector<string>& nameVec,
                      const vector<string>& phoneNumberVec,
                      const string& contactName);

int main()
{
    vector<string> name, number;
    string line, contactName;
    getline(cin, line);

    GetNameNumberVectors(line, name, number);

    cin >> contactName;
    cout << GetPhoneNumber(name, number, contactName) << endl;

    return 0;
}

void GetNameNumberVectors(const string &line,
                          vector<string> &name,
                          vector<string> &number)
{
    istringstream ss(line);
    string word;
    int count = 0;

    while (ss >> word)
    {
        count++;
        if (count % 2 == 0) {
            number.push_back(word);
        }
        else {
            name.push_back(word);
        }
    }
}

string GetPhoneNumber(const vector<string>& nameVec,
                      const vector<string>& phoneNumberVec,
                      const string& contactName) {
    string contact;

    for (size_t i = 0; i < nameVec.size(); ++i) {
        if (contactName == nameVec[i]) {
            contact = phoneNumberVec[i];
        }
    }
    return contact;
}