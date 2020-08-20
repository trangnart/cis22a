#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Ascend3(vector<int>& array);

int main() {
    vector<int> array(3);
    
    for (int& v : array) {
        cin >> v;
    }
    Ascend3(array);

    return 0;
}

void Ascend3(vector<int>& array) {
    sort(array.begin(), array.end());
    for (auto n : array) {
        cout << n << " ";
    }
}