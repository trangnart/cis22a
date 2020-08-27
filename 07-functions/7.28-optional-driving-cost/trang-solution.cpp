#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

double DrivingCost(double miles, double mpg, double gasPrice);
void DrivingRecord(const string& filename);
string addDollar(double& cost);

int main()
{
    const string FILENAME = "input.txt";
    DrivingRecord(FILENAME);

    return 0;
}

double DrivingCost(double miles, double mpg, double gasPrice) {
    return (gasPrice * miles) / mpg;
}

string addDollar(double& cost) {
    stringstream ss;
    double miles, mpg, gasPrice;

    ss << fixed << setprecision(2);
    ss << "$" << DrivingCost(miles, mpg, gasPrice);

    return ss.str();
}

void DrivingRecord(const string& filename) {
    ifstream inFS(filename);
    double cost;
    
    if (inFS.is_open()) {
        double miles, mpg, gasPrice;
       // double cost;

        cout << setw(9) << "Miles" << setw(9) << "MPG" << setw(9)
             << "Price" << setw(9) << "Cost" << endl;
        cout << fixed << setprecision(2);

        while(!inFS.eof()) {
            inFS >> miles >> mpg >> gasPrice;

            if (!inFS.fail()) {
                cout << setw(9) << miles << setw(9) << mpg << setw(9) << gasPrice
                     << setw(9) << addDollar(cost) << endl;
            }
        }
    }
    inFS.close();
}
