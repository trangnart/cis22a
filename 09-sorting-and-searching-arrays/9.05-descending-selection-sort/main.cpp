#include <iostream>
#include <vector>
using namespace std;

void SelectionSortDescendTrace(vector<int>&);
void DumpVector(int, const vector<int>&);

int main()
{

    return 0;
}

void SelectionSortDescendTrace(vector<int> &list)
{
}

void DumpVector(int index, const vector<int> &list)
{
    cout << index << ": ";
    for (auto n : list)
    {
        cout << n << " ";
    }
    cout << endl;
}