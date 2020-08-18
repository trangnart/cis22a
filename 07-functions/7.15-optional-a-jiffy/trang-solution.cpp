#include <iostream>
#include <iomanip>
using namespace std;

double SecondsToJiffies(double userSeconds);

int main() {
    double userSeconds;

    cout << SecondsToJiffies(userSeconds) << endl;
    
   return 0;
}
double SecondsToJiffies(double userSeconds) {
    cin >> userSeconds;
    cout << fixed << setprecision(2);

    return userSeconds * 100;
}