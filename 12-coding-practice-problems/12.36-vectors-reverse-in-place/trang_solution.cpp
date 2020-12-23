#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    vector<int> listNums;
    unsigned int currNum;
    string line;
    
    getline(cin, line);
    istringstream ss(line);

    while (ss >> currNum) {
        listNums.push_back(currNum);
    }

    reverse(listNums.begin(), listNums.end());

    for (auto e : listNums) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}