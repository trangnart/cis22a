#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int FindWordInWordList(const vector<string> &wordList, const string &wordToFind);

int main()
{
    int total;
    vector<string> originals, replacements;
    string sentence, wordToFind;

    cin >> total;
    originals.resize(total);
    replacements.resize(total);

    for (int i = 0; i < total; ++i)
    {
        cin >> originals[i] >> replacements[i];
    }

    cin.ignore(1);
    getline(cin, sentence);

    istringstream ss(sentence);

    while (ss >> wordToFind)
    {
        int index = FindWordInWordList(originals, wordToFind);

        if (index == -1)
        {
            cout << wordToFind << " ";
        }
        else
        {
            cout << replacements[index] << " ";
        }
    }
    cout << endl;

    return 0;
}

int FindWordInWordList(const vector<string> &wordList,
                       const string &wordToFind)
{
    auto it = find(wordList.begin(), wordList.end(), wordToFind);

    if (it == wordList.end())
    {
        return -1;
    }
    return distance(wordList.begin(), it);
}
