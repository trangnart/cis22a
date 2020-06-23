#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

void WriteData(ostream& outFS);

int main() {
  ofstream outFS;
  const string FILE = "quiz-2-salary.txt";

  outFS.open(FILE);
  if (!outFS.is_open()) {
    cout << "Cannot open " << FILE << endl;
    return 1;
  }

  for (int i = 0; i < 200; ++i) {
    WriteData(outFS);
  }

  outFS.close();

  return 0;
}

void WriteData(ostream& outFS) {
  string eName;
  int hours, ot_hours, reg_hours;
  double salary, regular, overtime = 0;
  const double SALARY_PER_HRS = 20.0;
  const double SALARY_OT_PER_HRS = 24.25;

  cout << "Enter name: ";
  getline(cin, eName);

  cout << "Enter hours worked: ";
  cin >> hours;
  cin.ignore();

  if (hours > 40) {
    ot_hours = hours - 40;
    reg_hours = hours - ot_hours;
    overtime = ot_hours * SALARY_OT_PER_HRS;
  } else {
    reg_hours = hours;
  }

  regular = reg_hours * SALARY_PER_HRS;
  salary = regular + overtime;

  outFS << fixed << setprecision(2);
  outFS << eName << endl;
  outFS << hours << endl;
  outFS << salary << endl;
}