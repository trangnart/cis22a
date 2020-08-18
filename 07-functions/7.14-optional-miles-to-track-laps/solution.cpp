#include <iostream>
#include <iomanip>
using namespace std;

double MilesToLaps(double userMiles) {
    return userMiles / 0.25;
}

int main() {
    double miles;

    cin >> miles;
    cout << fixed << setprecision(2);
    cout << MilesToLaps(miles) << endl;

    return 0;
}