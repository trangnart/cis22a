#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> userVals(10);
    vector<int> count(100);
    int num, frequency, mode, max = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        userVals.at(i) = num;
        if (num < 0 || num > 99) {
            cout << "Invalid input: " << num
                 << " is not in 0-99" << endl;
            return 0;
        }
        count.at(num)++;
    }

    for (int i = 0; i < 10; i++) {
        num = userVals.at(i);
        frequency = count.at(num);

        if (frequency > max) {
            max = frequency;
            mode = userVals.at(i);
        }
    }

    cout << mode << " " << max << endl;

    return 0;
}