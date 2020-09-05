#include <iostream>
#include <vector>
using namespace std;

void PopulateVector(vector<string> &list);

int main()
{
    char contain;
    size_t pos;
    vector<string> list;

    PopulateVector(list);

    cin >> contain;

    for (auto &e : list)
    {
        pos = e.find(contain);
        if (pos != string::npos)
        {
            cout << e << endl;
        }
    }

    return 0;
}

void PopulateVector(vector<string> &list)
{
    int size;
    cin >> size;

    list.resize(size);

    for (auto &e : list)
    {
        cin >> e;
    }
}
