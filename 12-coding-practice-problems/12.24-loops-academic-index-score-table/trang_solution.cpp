#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double AIS, GPA = 2.9, threshold, test_score;
    cin >> threshold;
    cout << fixed << setprecision(1);

    for (int i = 0; i < 11; i++) {
        GPA += 0.1;
        test_score = ((static_cast<double>(threshold) - (2.5 * (GPA / 4.0) * 100.0)) / 100.0) * 1600.0;
        cout << GPA << " " << test_score << endl;
    }

    return 0;
}