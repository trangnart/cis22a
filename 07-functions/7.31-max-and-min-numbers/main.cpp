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

   if (inFS.is_open())
   {
      string line;
      while (!inFS.eof())
      {
         getline(inFS, line);
         if (!inFS.fail())
         {
            // TODO: Implement this (one liner)
         }
      }
   }
   inFS.close();
}

vector<int> StringToVector(const string &sentence)
{
   vector<int> vec;
   // TODO: implement this
   return vec;
}

void RemoveMinMax(vector<int> &vec)
{
   // TODO: implement this
}

string OutputLine(const string &numList)
{
   stringstream ss;
   // TODO: implement this
   return ss.str();
}