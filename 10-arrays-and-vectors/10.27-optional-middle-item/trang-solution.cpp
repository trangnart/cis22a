#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void PopulateVector(vector<int> &numbers);

int main()
{
    vector<int> numbers;

    PopulateVector(numbers);

    if (numbers.size() < 10)
    {
        int middle = numbers.size() / 2;
        cout << numbers[middle] << endl;
    }
    else
    {
        cout << "Too many inputs" << endl;
    }
    return 0;
}

void PopulateVector(vector<int> &numbers)
{
    int num = 0;

    while (num != -1)
    {
        if (num > 0)
        {
            numbers.push_back(num);
        }
        cin >> num;
    }
}