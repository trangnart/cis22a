#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> userInts;
    int size;

    cin >> size;
    userInts.resize(size);

    for (auto &e : userInts)
    {
        cin >> e;
    }
    reverse(userInts.begin(), userInts.end());

    for (auto e : userInts)
    {
        cout << e << " ";
    }

    return 0;
}