#include <iostream>
#include <iomanip>
using namespace std;

double MilesToLaps(double userMiles);

int main() {
    double userMiles;
    cin >> userMiles;

    cout << fixed << setprecision(2);
    cout << MilesToLaps(userMiles) << endl;

   return 0;
}

double MilesToLaps(double userMiles) {
    return userMiles / 0.25;
}