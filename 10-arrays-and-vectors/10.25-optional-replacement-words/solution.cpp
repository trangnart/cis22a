#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>

using namespace std;

int FindWordInWordList(const vector<string>& wordList, const string& wordToFind);

int main() {
    int total;
    vector<string> source, target;
    string sentence, word;
    stringstream ss, newSentence;

    cin >> total;
    source.resize(total);
    target.resize(total);

    for (int i = 0; i < total; ++i) {
        cin >> source[i] >> target[i];
    }

    cin.ignore(1);
    getline(cin, sentence);
    ss.str(sentence);

    while (ss >> word) {
        int index = FindWordInWordList(source, word);
        newSentence << (index == -1 ? word : target[index])
                    << " ";
    }
    cout << newSentence.str() << endl;

    return 0;
}

int FindWordInWordList(const vector<string>& wordList, const string& wordToFind) {
    auto it = find(wordList.begin(), wordList.end(), wordToFind);
    if (it == wordList.end()) {
        return -1;
    }
    return it - wordList.begin();
}