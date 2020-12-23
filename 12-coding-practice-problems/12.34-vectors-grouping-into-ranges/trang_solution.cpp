#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> chptList(16);
    bool includeChpt = false;
    int i, j, count = 0;

    for (i = 1; i < 16; i++) {
        cin >> chptList.at(i);
    }

    for (i = 1; i < 16; i++) {
        if (chptList.at(i) == 1) {
            cout << i;
            includeChpt = true;

            if (chptList.at(i-1) == 0) {
                j = i;
                while (j < 15 && (chptList.at(j+1) == 1)) {
                    j++;
                    count++;
                }
                if (count >= 3) {
                    i = j;
                    cout << "-" << i << " ";
                    count = 0;
                }
                else {
                    cout << " ";
                }
            }
            else {
                cout << " ";
            }
        }
    }

    if (!includeChpt) {
        cout << "None";
    }
    cout << endl;
    return 0;
}
