#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <fstream>
using namespace std;

string CreateAcronym(string line);
void ReadAcronyms(const string& filename);
bool GetAcronymAndName(const string& line, string& acronym, string& name);

int main() {
   const string FILENAME = "input.txt";

   ReadAcronyms(FILENAME);

   return 0;
}

string CreateAcronym(string line) {
   string s = "";
   stringstream ss(line);
   string word;

   while(ss >> word) {
      char c = word[0];
      if (int(c) > 64 && int(c) < 91) {
         s += c;
      }
   }
   return s;
}

bool GetAcronymAndName(const string& line, string& acronym, string& name) {
   size_t pos = line.find(" - ");

   if (pos != string::npos) {
      acronym = line.substr(0, pos);
      name = line.substr(pos + 3, line.length());

      return true;
   }
   return false;
}

void ReadAcronyms(const string& filename) {
   ifstream inFS(filename);
   string line, acronym, name;

   if (inFS.is_open()) {
      cout << setw(62) << "Name  Standard   Mine" << endl;

      while (!inFS.eof()) {
         getline(inFS, line);

         if (!inFS.fail()) {
            GetAcronymAndName(line, acronym, name);
            string my_acronym = CreateAcronym(name);

            cout << setw(45) << name;
            cout << setw(10) << acronym;

            if (acronym == my_acronym) {
               cout << " = ";
            }
            else {
               cout << " ! ";
            }
            cout << my_acronym << endl;
         }
      }
   }
   inFS.close();
}