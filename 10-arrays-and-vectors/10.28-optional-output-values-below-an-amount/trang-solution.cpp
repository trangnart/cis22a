#include <iostream>
#include <vector>
using namespace std;

void PopulateVector(vector<int> &list);

int main()
{
    vector<int> list;
    int threshold;

    PopulateVector(list);
    cin >> threshold;

    for (auto &e : list)
    {
        if (e <= threshold)
        {
            cout << e << " ";
        }
    }
    cout << endl;

    return 0;
}

void PopulateVector(vector<int> &list)
{
    int size;
    cin >> size;

    list.resize(size);

    for (auto &e : list)
    {
        cin >> e;
    }
}