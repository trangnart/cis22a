#include <iostream>
#include <string>
using namespace std;

string ShortenSpace(const string sampleText);
int GetNumOfNonWSCharacters(const string sampleText);
int GetNumOfWords(const string sampleText);
int FindText(const string text, const string sampleText);
string ReplaceExclamation(const string sampleText);
void PrintMenu(string sampleText);

int main() {
  string sampleText;
  cout << "Enter a sample text:\n\n";
  getline(cin,sampleText);
  cout << "You entered: " << sampleText << endl << endl;
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
         << "q - Quit" << endl << endl;
    cout << "Choose an option:\n";
    cin >> userOption;
    
    switch (userOption) {
      case 'c': 
        cout << "Number of non-whitespace characters: " 
             << GetNumOfNonWSCharacters(sampleText) << endl << endl;;
      break;
      case 'w':
        cout << "Number of words: "
             << GetNumOfWords(sampleText) << endl << endl;
        break;
      case 'f':
        cout << "Enter a word or phrase to be found:\n";
        cin.ignore();
        getline(cin,userText);
        found = FindText(userText, sampleText);
        cout << "\"" << userText << "\" instances: "
             << found << endl << endl;
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
  } while (userOption !='q');
}

string ShortenSpace(const string sampleText) {
  string newText = "";
  bool spaceFound = false;
  for (unsigned int i = 0; i < sampleText.size(); i++) {
    if (sampleText[i] != ' ') {
      newText = newText + sampleText[i];
      spaceFound = false;
    } else {
      if (!spaceFound) {
        newText = newText + " ";
      }
      spaceFound = true;
    }
  }
  return newText;
}

int GetNumOfNonWSCharacters(const string sampleText) {
  int counter = 0;
  for (unsigned int i = 0; i < sampleText.size(); i++) {
    if (sampleText[i] != ' ')
      counter++;
  }
  return counter;
}

int GetNumOfWords(const string sampleText) {
  int spaces = 0;
  string singleSpaced = ShortenSpace(sampleText);

  for (unsigned int i = 0; i < singleSpaced.size(); i++) {
    if (singleSpaced[i] == ' ')
      spaces++;
  }
  return spaces + 1;
}

int FindText(const string text, const string sampleText) {
  int count = 0;
  int pos = -1;
  do {
    pos = sampleText.find(text, pos+1);
    if (pos != -1) {
      ++count;
    }
  } while (pos != -1);
  return count;
}

string ReplaceExclamation(const string sampleText) {
  string newText = sampleText;
  int pos = -1;
  do {
    pos = newText.find('!', pos+1);
    if (pos != -1) {
      newText[pos] = '.';
    }
  } while (pos != -1);

  return newText;
}