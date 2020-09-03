#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GetMinimumInt(vector<int> listInts);
void SubtractMin(int min, vector<int> &listInts);
void PopulateVector(vector<int> &numbers);
string Vector2String(const vector<int> &, const char * = " ");

int main()
{
    vector<int> numbers;

    PopulateVector(numbers);
    int min = GetMinimumInt(numbers);
    SubtractMin(min, numbers);

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

int GetMinimumInt(vector<int> listInts) {
    auto min = min_element(listInts.begin(), listInts.end());
    return *min;
}

void SubtractMin(int min, vector<int> &listInts)
{
    for (size_t i = 0; i < listInts.size(); ++i)
    {
        cout << listInts[i] - min << " ";
    }
}