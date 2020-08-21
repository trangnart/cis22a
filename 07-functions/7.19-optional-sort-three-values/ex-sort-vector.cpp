#include <iostream>
#include <algorithm> // for sort()
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v = {22, 5, 6};

    sort(v.begin(), v.end());

    for (auto n : v) {
        cout << n << " ";
    }

    cout << endl;
}