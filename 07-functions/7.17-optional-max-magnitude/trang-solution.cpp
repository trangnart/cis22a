#include <iostream>
using namespace std;

int MaxMagnitude(int userVal1, int userVal2);

int main() {
    int userVal1 ,userVal2;
    cin >> userVal1 >> userVal2;

    if (userVal1 < 0 || userVal2 < 0) {
        cout << "-" << MaxMagnitude(userVal1, userVal2) << endl;
    }
    else {
        cout << MaxMagnitude(userVal1, userVal2) << endl;
    }

    return 0;
}
int MaxMagnitude(int userVal1, int userVal2) {
    int a = abs(userVal1);
    int b = abs(userVal2);

    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}