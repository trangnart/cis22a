#include <iostream>
#include <vector>
using namespace std;

void SelectionSortDescendTrace(vector<int> &list);
void DumpVector(int index, const vector<int> &list);

int main()
{
    vector<int> list;
    int input = 0;

    while (input != -1) {
        cin >> input;
        if (input != -1) {
            list.push_back(input);
        }
    }

    SelectionSortDescendTrace(list);

    return 0;
}

void SelectionSortDescendTrace(vector<int> &list)
{
    for (size_t i = 0; i < list.size(); ++i)
    {
        // look for smallest
        int minIndex = i;
        for (size_t j = i + 1; j < list.size(); ++j)
        {
            if (list[j] < list[minIndex])
            {
                minIndex = j;
            }
        }
        // swap
        int hold = list[minIndex];
        list[minIndex] = list[i];
        list[i] = hold;

        DumpVector(i, list);
    }
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