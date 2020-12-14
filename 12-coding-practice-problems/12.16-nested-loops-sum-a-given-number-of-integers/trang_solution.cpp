#include <iostream>
using namespace std;

int main() {
    int num, sum, i = 0;
    cin >> i;

    while (i > 0) {
        sum = 0;

        for (int j = 1; j < i; j++) {
            cin >> i;
            sum += i;
        }
        cout << sum << endl;
        cin >> i;
    }

    return 0;
}