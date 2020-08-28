#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

double DrivingCost(double, double, double);
void DrivingRecord(const string&);
string PrettyLine(vector<double>);

int main() {
    const string FILENAME = "input.txt";
    DrivingRecord(FILENAME);
    return 0;
}

double DrivingCost(double miles, double mpg, double gasPrice) {
    return miles / mpg * gasPrice;
}

void DrivingRecord(const string& filename) {
    ifstream inFS(filename);
    double miles, mpg, ppg, cost;

    if (inFS.is_open()) {
        cout << fixed << setprecision(2);
        cout << setw(9) << right << "Miles"
             << setw(9) << right << "MPG"
             << setw(9) << right << "Price"
             << setw(9) << right << "Cost" << endl;

        while (!inFS.eof()) {
            inFS >> miles >> mpg >> ppg;
            if (!inFS.fail()) {
                cost = DrivingCost(miles, mpg, ppg);

                cout << setw(9) << right << miles
                     << setw(9) << right << mpg
                     << setw(9) << right << ppg
                     << setw(9) << right << cost << endl;
            }
        }
    }
    inFS.close();
}

string PrettyLine(vector<double> info) {
    stringstream line, ppg, cost;
    // all printing will have 2 decimal places
    line << fixed << setprecision(2);
    line << setw(9) << right << info[0]
         << setw(9) << right << info[1];

    ppg << fixed << setprecision(2);
    ppg << '$' << info[2];

    line << setw(9) << right << ppg.str();

    cost << fixed << setprecision(2);
    cost << '$' << info[3];
    line << setw(9) << right << cost.str();

    return line.str();
}

void DrivingRecord_WithDollarSign(const string& filename) {
    ifstream inFS(filename);
    vector<double> info(4);

    if (inFS.is_open()) {
        cout << setw(9) << right << "Miles"
             << setw(9) << right << "MPG"
             << setw(9) << right << "Price"
             << setw(9) << right << "Cost" << endl;

        while (!inFS.eof()) {
            inFS >> info[0] >> info[1] >> info[2];
            if (!inFS.fail()) {
                info[3] = DrivingCost(info[0], info[1], info[2]);

                cout << PrettyLine(info) << endl;
            }
        }
    }
    inFS.close();
}