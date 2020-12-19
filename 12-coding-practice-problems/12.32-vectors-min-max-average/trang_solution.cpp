#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int minVal, maxVal, sumVals = 0;
    vector<int> Vals(10);

    for (size_t i = 0; i < 10; i++) {
        cin >> Vals.at(i);
        sumVals += Vals.at(i);
    }

    maxVal = *max_element(Vals.begin(), Vals.end());
    minVal = *min_element(Vals.begin(), Vals.end());

    cout << minVal << " " << maxVal << " " << sumVals / 10.0 << endl;

    return 0;
}