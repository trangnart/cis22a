#include <iostream>
#include <iomanip>
using namespace std;

double StepsToMiles(int userSteps);

int main() {
    int steps;

    cin >> steps;
    cout << fixed << setprecision(2);
    cout << StepsToMiles(steps) << endl;

    return 0;
}

double StepsToMiles(int userSteps) {
    const double STEPS_PER_MILE = 2000.0;
    return static_cast<double>(userSteps) / STEPS_PER_MILE;
}