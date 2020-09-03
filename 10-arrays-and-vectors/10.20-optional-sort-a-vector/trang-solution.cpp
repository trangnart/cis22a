#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PopulateVector(vector<int> &numbers);
void SortVector(vector<int> &myVec);

int main()
{
    vector<int> numbers;

    PopulateVector(numbers);
    SortVector(numbers);

    return 0;
}

void PopulateVector(vector<int> &numbers)
{
    int size;
    cin >> size;

    numbers.resize(size);
    for (auto &e : numbers)
    {
        cin >> e;
    }
}

void SortVector(vector<int> &myVec)
{
    sort(myVec.begin(), myVec.end());

    for (auto e : myVec)
    {
        cout << e << " ";
    }
}