#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double R = pow(2.00, 1.0/12.0);
    double frequency;

    cout << fixed << setprecision(2);
    cout << "Enter frequency: " << R << " ";
    cin >> frequency;
    cout << frequency << " ";

    for( int n = 1; n <= 4; ++n ) {
        cout << (frequency * pow(R, n))
             << " ";
    }
    cout << endl;
    return 0;
}