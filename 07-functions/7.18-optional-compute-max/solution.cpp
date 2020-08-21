#include <iostream>
#include <vector>
using namespace std;

int MaxFive(vector<int> numbers) {
    int maxFound = numbers.back();
    numbers.pop_back();

    for (auto n : numbers) {
        if (n > maxFound) {
            maxFound = n;
        }
    }
    return maxFound;
}

int main() {
    vector<int> numbers(5);

    for (auto& n : numbers) {
        cin >> n;
    }
    cout << MaxFive(numbers) << endl;

    return 0;
}