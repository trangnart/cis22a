#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void PopulateVector(vector<string> &list);
int GetFrequencyOfWord(const vector<string>& wordsList, const string& currWord);

int main()
{
    vector<string> list;
    string word;

    PopulateVector(list);

    for (auto currWord : list) {
        cout << currWord << " "
             << GetFrequencyOfWord(list, currWord)
             << endl;
    }
}

void PopulateVector(vector<string> &list)
{
    string size;
    cin >> size;

    int num = stoi(size);
    list.resize(num);

    for (auto &e : list)
    {
        cin >> e;
    }
}

int GetFrequencyOfWord(const vector<string>& wordsList,
                       const string& currWord) {
    int count = 0;

    for (auto e : wordsList) {
        if (currWord == e) {
            count++;
        }
    }
    return count;
}