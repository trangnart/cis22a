#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    vector<int> listNums;
    unsigned int currNum;
    string line;
    unsigned int listSize;

    getline(cin, line);
    istringstream ss(line);

    while (ss >> currNum) {
        listNums.push_back(currNum);
    }
    listSize = listNums.size();

    for (size_t i = 0; i < listSize / 2; i++) {
        swap(listNums.at(i), listNums.at(listSize-i-1));
    }

    for (auto e : listNums) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}