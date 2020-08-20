#include <iostream>
#include <vector>
using namespace std;

int MaxFive(vector<int>& numbers );

int main() {
    vector<int> numbers(5);

    for (size_t i=0; i < numbers.size(); ++i) {
        cin >> numbers[i];
    }
    cout << MaxFive(numbers) << endl;

   return 0;
}

int MaxFive(vector<int>& numbers) {
    int maxFound = numbers[0];

    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > maxFound) {
            maxFound = numbers[i];
        }
    }

    return maxFound;
}