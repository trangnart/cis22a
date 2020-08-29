#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

vector<int> StringToVector(const string &);
void NoMaxMin(const string &);
void RemoveMinMax(vector<int> &);
string OutputLine(const string &);

int main()
{
    const string FILENAME = "input.txt";
    NoMaxMin(FILENAME);

   return 0;
}

void NoMaxMin(const string &filename)
{
   ifstream inFS(filename);
    vector<int> vec;
   if (inFS.is_open())
   {
      string line;
      while (!inFS.eof())
      {
         getline(inFS, line);
         if (!inFS.fail())
         {
            cout << OutputLine(line) << endl;
         }
      }
   }
   inFS.close();
}

vector<int> StringToVector(const string &sentence)
{
    int num;
    vector<int> vec;
    stringstream ss(sentence);

    while (ss >> num) {
        vec.push_back(num);
    }
    return vec;
}

void RemoveMinMax(vector<int> &vec)
{
    auto max = max_element(vec.begin(), vec.end());
    vec.erase(max);
}

string OutputLine(const string &numList)
{
    stringstream ss;

    ss << setw(30) << numList << " -> ";

    return ss.str();
}