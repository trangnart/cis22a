#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> binaryNum(8);
    int digitWeight = 1;
    int decimalSum = 0;

    for (int i = 7; i >= 0; i--) {
        cin >> binaryNum.at(i);
    }

    for (int i = 0; i < 8; i++) {
        decimalSum += binaryNum.at(i) * digitWeight;
        digitWeight *= 2;
    }

    cout << decimalSum << endl;
    return 0;
}