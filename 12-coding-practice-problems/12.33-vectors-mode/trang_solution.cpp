#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> userVals(10);
    int count, mode, f = 0;

    for (int i = 0; i < 10; i++) {
        cin >> userVals.at(i);
        if (userVals.at(i) < 0 || userVals.at(i) > 99) {
            cout << "Invalid input: " << userVals.at(i)
                 << " is not in 0-99" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        count = 0;

        for (int j = 0; j < 10; j++) {
            if (userVals[i] == userVals[j]) {
                count++;
            }
        }
        if (count > f) {
            f = count;
            mode = userVals[i];
        }
    }

    cout << mode << " " << f << endl;

    return 0;
}