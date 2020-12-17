#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double threshold, test_score;
    cin >> threshold;
    cout << fixed << setprecision(1);

    for (double GPA = 3.0; GPA < 4.1; GPA+=0.1) {
        test_score = ((static_cast<double>(threshold) - (2.5 * (GPA / 4.0) * 100.0)) / 100.0) * 1600.0;
        cout << GPA << " " << test_score << endl;
    }

    return 0;
}