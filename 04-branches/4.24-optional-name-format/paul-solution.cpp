#include <iostream>
#include <vector>
using namespace std;

void split(string str, vector<string>& list, char = ' ');

int main() {
    string fullname;
    vector<string> name;

    cout << "Enter name: ";
    getline(cin, fullname);
    split(fullname, name);

    if (name.size() < 2) {
        cout << "Invalid name\n";
        return 1;
    }

    cout << name.back() << ", "
         << name.front().at(0) << ".";

    if (name.size() > 2)
         cout << name.at(1).at(0) << ".";

    cout << endl;

    return 0;
}

void split(string str, vector<string>& list, char delim) {
    size_t start = 0, end = 0;

    do {
        end = str.find(delim, start);
        if (end == string::npos) {
            list.push_back(str.substr(start, str.length()-start+1));
        } else {
            list.push_back(str.substr(start, end-start));
        }
        start = end + 1;
    } while (end != string::npos);
}