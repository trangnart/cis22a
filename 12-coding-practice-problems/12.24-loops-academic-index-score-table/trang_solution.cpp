#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double AIS, GPA = 2.9, threshold, test_score;
    cin >> threshold;
    cout << fixed << setprecision(1);

    for (int i = 0; i < 11; i++) {
        GPA += 0.1;
        cout << GPA << " ";
    }
    test_score = ((AIS - (2.5 * (GPA / 4.0) * 100)) / 100) * 1600;

    return 0;
}