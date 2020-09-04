#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PopulateVector(vector<int>&);

int main() {
    vector<int> list;

    PopulateVector(list);

    reverse(list.begin(), list.end());

    for (auto n : list) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

void PopulateVector(vector<int>& numbers) {
    size_t total;
    cin >> total;
    numbers.resize(total);

    for (size_t i=0; i < total; ++i) {
        cin >> numbers[i];
    }
}