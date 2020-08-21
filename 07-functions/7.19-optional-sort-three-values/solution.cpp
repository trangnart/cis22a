#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Ascend3(vector<int> &array)
{
    sort(array.begin(), array.end());
}

int main()
{
    vector<int> numbers(3);

    for (auto &n : numbers)
    {
        cin >> n;
    }

    Ascend3(numbers);

    for (auto n : numbers)
    {
        cout << n << " ";
    }

    cout << endl;

    return 0;
}