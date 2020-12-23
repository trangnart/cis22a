#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> listNums;
    unsigned int currNum;

    while (cin >> currNum) {
        listNums.push_back(currNum);
    }

    sort(listNums.begin(), listNums.end(), greater<int>());

    for (auto e : listNums) {
        cout << e << " ";
    }
    cout << endl;
    
    return 0;
}