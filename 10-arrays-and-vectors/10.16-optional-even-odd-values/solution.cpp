#include <iostream>
#include <vector>
using namespace std;

bool IsVectorEven(vector<int> myVec);
bool IsVectorOdd(vector<int> myVec);
int GetNumbers(vector<int> &myVec);
void PrintVector(const vector<int> &myVec);

int main()
{
    vector<int> numArr;
    int count = GetNumbers(numArr);
    if (count <= 0)
    {
        cout << "Did not get any number\n";
        return 1;
    }

    if (IsVectorEven(numArr))
    {
        cout << "all even\n";
    }
    else if (IsVectorOdd(numArr))
    {
        cout << "all odd\n";
    }
    else
    {
        cout << "not even or odd\n";
    }

    return 0;
}

bool IsVectorEven(vector<int> myVec)
{
    for (auto n : myVec)
    {
        if (n % 2 == 1)
        {
            return false;
        }
    }
    return true;
}

bool IsVectorOdd(vector<int> myVec)
{
    for (auto n : myVec)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}
void PrintVector(const vector<int> &myVec)
{
    for (auto v : myVec)
    {
        cout << v << " ";
    }
    cout << endl;
}

int GetNumbers(vector<int> &myVec)
{
    int total;
    cin >> total;
    myVec.resize(total);
    for (auto &e : myVec)
    {
        cin >> e;
    }
    return total;
}