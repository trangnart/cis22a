#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

int WriteData(void) {
  string dataInput = "";

  cout << "Enter a data point (-1 to stop input):\n";
  getline(cin, dataInput);

  if (dataInput == "-1") {
    return 1;
  }

  ofstream outFS;
  outFS.open("novels.txt");
  if (!outFS.is_open()) {
    cout << "Cannot open novels.txt\n";
    return 1;
  }

  while (dataInput != "-1") {
    int commaPos = dataInput.find(",");
    string name = dataInput.substr(0, commaPos);
    int num = stoi(dataInput.substr(commaPos+1, dataInput.size()));

    cout << "Data string: " << name << endl;
    cout << "Data integer: " << num << endl;
    outFS << name << endl;
    outFS << num << endl;

    cout << "Enter a data point (-1 to stop input):\n";
    getline(cin, dataInput);
  }

  outFS.close();
  return 0;
}

int OutputTable(const string title,
                const string header1,
                const string header2) {
  ifstream inFS;
  string name, num;

  cout << setw(33) << right << title << endl;
  cout << setw(20) << left << header1 << "|";
  cout << setw(23) << right << header2 << endl;

  cout << setfill('-') << setw(44) << "" << endl;
  cout << setfill(' ');

  inFS.open("novels.txt");
  if (!inFS.is_open()) {
    cout << "Cannot open novels.txt\n";
    return 1;
  }

  while (!inFS.eof()) {
    getline(inFS, name);
    getline(inFS, num);
    if (!inFS.fail()) {
      cout << setw(20) << left << name << "|";
      cout << setw(23) << right << num << endl;
    }
  }

  inFS.close();
  return 0;
}

int OutputChart(void) {
  ifstream inFS;
  string name, num;

  inFS.open("novels.txt");
  if (!inFS.is_open()) {
    cout << "Cannot open novels.txt\n";
    return 1;
  }

  while(!inFS.eof()) {
    getline(inFS, name);
    getline(inFS, num);
    if (!inFS.fail()) {
      cout << setfill(' ') << setw(20) << right << name << " ";
      cout << setfill('*') << setw(stoi(num)) << "" << endl;
    }
  }

  inFS.close();
  return 0;
}

int main() {
  string title, c1Header, c2Header;

  cout << "Enter a title for the data:\n";
  getline(cin, title);
  cout << "You entered: " << title << endl << endl;;

  cout << "Enter the column 1 header:\n";
  getline(cin, c1Header);
  cout << "You entered: " << c1Header << endl << endl;
  
  cout << "Enter the column 2 header:\n";
  getline(cin, c2Header);
  cout << "You entered: " << c2Header << endl << endl;

  if (WriteData() != 0) {
    return 1;
  }

  if (OutputTable(title, c1Header, c2Header) != 0) {
    return 1;
  }

  cout << endl;

  if (OutputChart() != 0) {
    return 1;
  }

  return 0;
}