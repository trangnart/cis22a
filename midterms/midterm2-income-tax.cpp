#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

double TaxRate(int income);
bool GetIncomeName(const string line, int& income, string& name);

int main() {
  ifstream inFS;
  int income;
  string name;
  const string FILENAME = "income.txt";

  inFS.open(FILENAME);
  if (!inFS.is_open()) {
    cout << "Could not open file "
         << FILENAME
         << endl;
    return 1;
  }

  cout << fixed << setprecision(1);

  while (!inFS.eof()) {
    string line;
    getline(inFS, line);
    if (!inFS.fail()) {
      if (GetIncomeName(line, income, name)) {
        double tax_rate = TaxRate(income);
        cout << name << " " << tax_rate << "%\n";
      }
      else {
        cout << "Cannot recognize line: " << line << endl;
      }
    }
  }
  inFS.close();

  return 0;
}

bool GetIncomeName(const string line, int& income, string& name) {
  int pos = line.find(" ");
  if (pos == string::npos) {
    return false;
  }
  income = stoi(line.substr(0, pos));
  name = line.substr(pos+1, line.size()-pos-1);
  return true;
}

double TaxRate(int income) {
  double tax_rate = 0.0;

  if (income > 50000) {
    tax_rate = 21.7;
  } else if (income > 30000) {
    tax_rate = 9.8;
  } else if (income > 10000) {
    tax_rate = 3.0;
  }
  return tax_rate;
}