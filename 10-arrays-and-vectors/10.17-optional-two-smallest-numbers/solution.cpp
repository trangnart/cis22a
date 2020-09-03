#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

void PopulateVector(vector<int>&);

int main() {
    vector<int> numbers;
    PopulateVector(numbers);

    auto min = min_element(numbers.begin(), numbers.end());
    int min1 = *min;
    numbers.erase(min);

    min = min_element(numbers.begin(), numbers.end());

    cout << min1 << " "
         << *min << endl;

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