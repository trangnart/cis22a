#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> yearlyValues(12);

    for (int i = 0; i < 12; i++) {
        cin >> yearlyValues.at(i);
    }

    for (int i = 0; i < 12; i+=4) {
        cout << yearlyValues.at(i) << " "
             << yearlyValues.at(i+1) << " "
             << yearlyValues.at(i+2) << " "
             << yearlyValues.at(i+3) << " "
             << endl;
    }
    return 0;
}