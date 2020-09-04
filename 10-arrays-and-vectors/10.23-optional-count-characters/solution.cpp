#include <iostream>
#include <string>
using namespace std;

int CountCharacters(char userChar, const string& userString);

int main() {
    char c;
    string line;

    cin >> c;
    getline(cin, line);

    cout << CountCharacters(c, line) << endl;

    return 0;
}

int CountCharacters(char userChar, const string& userString) {
    int count = 0;
    for (auto c : userString) {
        if (c == userChar) {
            count++;
        }
    }
    return count;
}