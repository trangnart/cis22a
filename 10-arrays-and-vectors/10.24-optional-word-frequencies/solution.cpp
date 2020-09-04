#include <iostream>
#include <string>
#include <vector>

using namespace std;

int GetFrequencyOfWord(const vector<string>& wordsList, const string& currWord);

int main() {
    int total;
    vector<int> counts;
    vector<string> words;

    cin >> total;
    words.resize(total);

    for (int i = 0; i < total; ++i) {
        cin >> words[i];
    }

    for (auto w : words) {
        cout << w << " "
             << GetFrequencyOfWord(words, w)
             << endl;
    }

    return 0;
}

int GetFrequencyOfWord(const vector<string>& wordsList, const string& currWord) {
    int count = 0;
    for (auto w : wordsList) {
        if (w == currWord) {
            count++;
        }
    }
    return count;
}