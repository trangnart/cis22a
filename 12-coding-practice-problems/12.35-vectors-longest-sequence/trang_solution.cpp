#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int numItems;
    vector<string> listItems;
    string currItem;
    int i, count = 0, maxLength = 0;

    cin >> numItems;
    for (i = 0; i < numItems; ++i) {
        cin >> currItem;
        listItems.push_back(currItem);
    }

    for (i = 0; i < numItems; i++) {
        currItem = listItems.at(i);
        if (currItem != "I") {
            count++;
        }
        else {
            if (count > maxLength) {
                maxLength = count;
            }
            count = 0;
        }
    }

    if (count > maxLength) {
        maxLength = count;
    }

    cout << maxLength << endl;

    return 0;
}