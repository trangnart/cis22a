#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int CostForMilesGas(int);
int CostForMilesMaintenance(int);
int CostForMiles(int);
void VehicleCostRecord(const string&);

int main() {
    const string FILENAME = "input.txt";
    VehicleCostRecord(FILENAME);

    return 0;
}

int CostForMilesGas(int miles) {
    const int MILES_PER_GAL = 30;
    const int CENTS_PER_GAL = 4 * 100;
    return (miles * CENTS_PER_GAL) / MILES_PER_GAL;
}

int CostForMilesMaintenance(int miles) {
    const int TIRES_MILES = 20000;
    const int TIRES_CENTS = 500 * 100;
    const int SERVICE_MILES = 10000;
    const int SERVICE_CENTS = 300 * 100;
    return miles * TIRES_CENTS / TIRES_MILES +
           miles * SERVICE_CENTS / SERVICE_MILES;
}

int CostForMiles(int miles) {
    return CostForMilesGas(miles) +
           CostForMilesMaintenance(miles);
}

void VehicleCostRecord(const string& filename) {
    ifstream inFS(filename);
    int miles;

    if (inFS.is_open()) {
        cout << setw(9) << right << "Miles"
             << setw(15) << right << "Cost" << endl;

        while (!inFS.eof()) {
            inFS >> miles;
            if (!inFS.fail()) {
                cout << setw(9) << setfill(' ') << right << miles << ' '
                     << setw(10) << setfill('_') << ' '
                     << CostForMiles(miles) << " \u00A2" // or "¢"
                     << endl;
            }
        }
    }
    inFS.close();
}