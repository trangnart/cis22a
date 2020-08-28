#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int CostForMilesGas(int miles);
int CostForMilesMaintenance(int miles);
int CostForMiles(int miles);
void VehicleCostRecord(const string& filename);

int main()
{
    const string FILENAME = "input.txt";

    VehicleCostRecord(FILENAME);

    return 0;
}

int CostForMilesGas(int miles) {
    int CENTS_PER_GAL = 400;
    int MILES_PER_GAL = 30;

    int centsGas = (miles * CENTS_PER_GAL) / MILES_PER_GAL;

    return centsGas;
}

int CostForMilesMaintenance(int miles) {
    int TIRES_MILES	= 20000;
    int TIRES_CENTS	= 50000;
    int SERVICE_MILES = 10000;
    int SERVICE_CENTS = 30000;

    int centsMaintenance = ((miles * TIRES_CENTS) / TIRES_MILES) +
                            ((miles * SERVICE_CENTS) / SERVICE_MILES);

    return centsMaintenance;
}

int CostForMiles(int miles) {
    int total_cents = CostForMilesGas(miles) + CostForMilesMaintenance(miles);

    return total_cents;
}

void VehicleCostRecord(const string& filename) {
    ifstream inFS(filename);

    if (inFS.is_open()) {
        int miles;

        cout << setw(9) << "Miles"
             << setw(15) << "Cost" << endl;

        while(!inFS.eof()) {
            inFS >> miles;

            if (!inFS.fail()) {
                cout << setw(9) << miles << " _________ "
                     << CostForMiles(miles)
                     << " \u00A2" << endl;
            }
        }
    }
    inFS.close();
}