#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PopulateVector(vector<int>& numbers);

int main() {
    vector<int> numbers, smallest;
    PopulateVector(numbers);

    for (size_t i = 0; i < 2; ++i) {
        auto min = min_element(numbers.begin(), numbers.end());
        smallest.push_back(*min);
        numbers.erase(min);
    }
    for (auto e : smallest) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}

void PopulateVector(vector<int>& numbers) {
    int size;
    cin >> size;

    numbers.resize(size);
    for (auto& e : numbers) {
        cin >> e;
    }
}
