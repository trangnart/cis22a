#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <fstream>
using namespace std;

string CreateAcronym(string usrStr);
void ReadAcronyms(const string& filename);
bool GetAcronymAndName(const string& line, string& acronym, string& name);

int main() {
   const string FILENAME = "input.txt";

   ReadAcronyms(FILENAME);

   return 0;
}

string CreateAcronym(string usrStr) {
   string s = "";
   stringstream ss(usrStr);
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

   if (inFS.is_open()){
      string line, acronym, name;
      cout << setw(62) << "Name  Standard   Mine" << endl;

      while (!inFS.eof()){
         getline(inFS, line);

         if (!inFS.fail()){
            GetAcronymAndName(line, acronym, name);

            cout << setw(45) << name;
            cout << setw(10) << acronym;

            if (acronym == CreateAcronym(line)) {
               cout << " = ";
            }
            else {
               cout << " ! ";
            }
            cout << CreateAcronym(line) << endl;

         }
      }
   }
   inFS.close();
}