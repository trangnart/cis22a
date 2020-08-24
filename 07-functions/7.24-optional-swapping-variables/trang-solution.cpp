#include <iostream>
#include <vector>
using namespace std;

void SwapValues(vector<int>&);

int main()
{
    vector<int> numbers(2);

    for (auto& e : numbers) {
        cin >> e;
    }

    SwapValues(numbers);

    for (auto& i : numbers) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

void SwapValues(vector<int>& numbers) {
    for (size_t i = 0; i < numbers.size()-1; ++i) {
        int temp = numbers[0];
        numbers[0] = numbers[1];
        numbers[1] = temp;
    }
}