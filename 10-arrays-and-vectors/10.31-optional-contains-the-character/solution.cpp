#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PopulateVector(vector<string>& list);

int main() {
    vector<string> words;
    char letter;

    PopulateVector(words);
    cin >> letter;

    for (auto word : words) {
        if (word.find(letter) != string::npos) {
            cout << word << endl;
        }
    }

    return 0;
}

void PopulateVector(vector<string>& list) {
    size_t total;

    cin >> total;
    list.resize(total);
    for (auto& n : list) {
        cin >> n;
    }
}