#include <iostream>
#include <algorithm> // for sort()
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {4, 2, 3};

    sort(v.begin(), v.end());

    // alternative:
    // for (int i=0; i < v.size(); ++i) {
    //    cout << v[i] << " ";
    // }
    // you can also use v.at(i)

    for (auto n : v)
    {
        cout << n << " ";
    }

    cout << endl;
}