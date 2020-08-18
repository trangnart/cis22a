#include <iostream>
using namespace std;

int MaxMagnitude(int userVal1, int userVal2) {
    return (abs(userVal1) > abs(userVal2)) ? userVal1 : userVal2;
}

int main() {
    int val1, val2;

    cin >> val1 >> val2;
    cout << MaxMagnitude(val1, val2) << endl;

    return 0;
}