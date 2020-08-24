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
        int temp = numbers[0];
        numbers[0] = numbers[1];
        numbers[1] = temp;
}