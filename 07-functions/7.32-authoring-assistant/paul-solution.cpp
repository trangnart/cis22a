#include <iostream>
#include <string>
#include <regex>
using namespace std;

const regex SPACE_RE("\\s+");

int GetNumOfNonWSCharacters(const string &sampleText);
int GetNumOfWords(const string &sampleText);
int FindText(const string &text, const string &sampleText);
string ShortenSpace(const string &sampleText);
string ReplaceExclamation(const string &sampleText);
void PrintMenu(string sampleText);

int main() {
    string sampleText;

    cout << "Enter a sample text:\n\n";
    getline(cin, sampleText);
    cout << "You entered: " << sampleText << endl
         << endl;
    PrintMenu(sampleText);

    return 0;
}

void PrintMenu(string sampleText) {
    char userOption;
    string userText;
    int found;

    do {
        cout << "MENU\n"
             << "c - Number of non-whitespace characters\n"
             << "w - Number of words\n"
             << "f - Find text\n"
             << "r - Replace all !'s\n"
             << "s - Shorten spaces\n"
             << "q - Quit\n\n"
             << "Choose an option:\n";
        cin >> userOption;

        switch (userOption) {
        case 'c':
            cout << "Number of non-whitespace characters: "
                 << GetNumOfNonWSCharacters(sampleText) << endl << endl;
            break;
        case 'w':
            cout << "Number of words: "
                 << GetNumOfWords(sampleText) << endl << endl;
            break;
        case 'f':
            cout << "Enter a word or phrase to be found:\n";
            cin.ignore();
            getline(cin, userText);
            cout << "\"" << userText << "\" instances: "
                 << FindText(userText, sampleText)
                 << endl << endl;
            break;
        case 'r':
            cout << "Edited text: " << ReplaceExclamation(sampleText)
                 << endl << endl;
            break;
        case 's':
            cout << "Edited text: " << ShortenSpace(sampleText)
                 << endl << endl;
            break;
        }
    } while (userOption != 'q');
}

int GetNumOfNonWSCharacters(const string &sampleText) {
    return regex_replace(sampleText, SPACE_RE, "").size();
}

string ShortenSpace(const string &sampleText) {
    return regex_replace(sampleText, SPACE_RE, " ");
}

int GetNumOfWords(const string &sampleText) {
    return FindText(" ", ShortenSpace(sampleText)) + 1;
}

int FindText(const string &text, const string &sampleText) {
    size_t count = 0,
           pos = 0;
    while (pos != string::npos) {
        pos = sampleText.find(text, pos);
        if (pos != string::npos) {
            pos += text.size();
            count++;
        }
    }
    return count;
}

string ReplaceExclamation(const string &sampleText) {
    return regex_replace(sampleText, regex("!"), ".");
}