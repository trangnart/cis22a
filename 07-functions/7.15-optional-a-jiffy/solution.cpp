#include <iostream>
#include <iomanip>
using namespace std;

double SecondsToJiffies(double userSeconds) {
    return userSeconds * 100;
}

int main() {
    double seconds;

    cin >> seconds;
    cout << fixed << setprecision(2);
    cout << SecondsToJiffies(seconds) << endl;

    return 0;
}