#include <iostream>
using namespace std;

int main() {
    int currNum, testDiff, sizeList;
    int prevNum = 0;
    int maxDiff = 0;

    cin >> sizeList;

    for (int i = 0; i < sizeList; ++i) {
        cin >> currNum;
        if (i > 0) {
            testDiff = abs(currNum - prevNum);
            if (testDiff > maxDiff) {
                maxDiff = testDiff;
            }
        }
        prevNum = currNum;
    }

    cout << maxDiff << endl;

   return 0;
}