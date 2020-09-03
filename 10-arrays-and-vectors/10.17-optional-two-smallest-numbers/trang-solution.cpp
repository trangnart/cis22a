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
    if (smallest[0] < smallest[1]) {
        cout << smallest[0] << " " << smallest[1] << endl;
    }
    else {
        cout << smallest[1] << " " << smallest[0] << endl;
    }
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
