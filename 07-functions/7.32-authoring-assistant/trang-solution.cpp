#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

void PrintMenu(string usrStr);
int GetNumOfNonWSCharacters(const string& usrStr);
int GetNumOfWords(const string& usrStr);
int FindText(const string& usrStr, const string& word);
void ReplaceExclamation(string& usrStr);
void ShortenSpace(string& usrStr);
void PrintMenuItems();

int main() {
    string usrStr;

    cout << "Enter a sample text:\n";
    getline(cin, usrStr);
    cout << endl << "You entered: " << usrStr << endl;

    PrintMenu(usrStr);

    return 0;
}

void PrintMenuItems() {
    cout << endl << "MENU\n"
         << "c - Number of non-whitespace characters\n"
         << "w - Number of words\n"
         << "f - Find text\n"
         << "r - Replace all !'s\n"
         << "s - Shorten spaces\n"
         << "q - Quit\n" << endl
         << "Choose an option: ";
}

void PrintMenu(string usrStr) {
    char usropt;

    do {
        PrintMenuItems();
        cin >> usropt;

        if (usropt == 'c') {
            cout << "Number of non-whitespace characters: "
                 << GetNumOfNonWSCharacters(usrStr) << endl;
        }

        else if (usropt == 'w') {
            cout << "Number of words: " << GetNumOfWords(usrStr) << endl;
        }

        else if (usropt == 'f') {
            string word;
            
            cout << "Enter a word or phrase to be found:\n";
            cin >> word;
            cout << "\"" << word << "\"" << " instances: "
                 << FindText(usrStr, word) << endl;
        }

        else if (usropt == 'r') {
            ReplaceExclamation(usrStr);
            cout << "Edited text: " << usrStr << endl;
        }

        else if (usropt == 's') {
            ShortenSpace(usrStr);
            cout << "Edited text: " << usrStr << endl;
        }

    } while (usropt != 'q');
}

int GetNumOfNonWSCharacters(const string& usrStr) {
    int count = 0;

    for (auto i = usrStr.begin(); i != usrStr.end(); ++i) {
        if (*i != ' ') {
            count++;
        }
    }
    return count;
}

int GetNumOfWords(const string& usrStr) {
    int count = 0;
    string word;
    stringstream ss(usrStr);

    while(ss >> word) {
        count++;
    }

    return count;
}

int FindText(const string& usrStr, const string& word) {
    int count = 0;
    size_t pos = 0;
    size_t start = 0;

    do {
        pos = usrStr.find(word, start);
        if (pos != string::npos) {
            count++;
            start = pos + word.size();
        }
    } while (pos != string::npos);

    return count;
}

void ReplaceExclamation(string& usrStr) {
    size_t pos;

    do {
        pos = usrStr.find('!');
        if (pos != string::npos) {
            usrStr[pos] = '.';
        }
    } while (pos != string::npos);
}

void ShortenSpace(string& usrStr) {
    string word;
    stringstream ss(usrStr), newStr;

    while(ss >> word) {
        newStr << word << " ";
    }

    usrStr = newStr.str();
}
