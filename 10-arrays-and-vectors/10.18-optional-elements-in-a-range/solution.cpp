#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

void PopulateVector(vector<int>& numbers);

int main() {
    vector<int> numbers;
    int min, max;

    PopulateVector(numbers);
    cin >> min >> max;

    for (auto n : numbers) {
        if (n >= min && n <= max) {
            cout << n << " ";
        }
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
