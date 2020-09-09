#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int i;

    cout << "Enter an integer:" << endl;
    cin >> n;

    cout << "Sequence: ";

    if (n < 0)
    {
        n = abs(n);
    }
    for (int i = n * -1; i < n + 1; ++i)
    {
        cout << i << " ";
    }

    return 0;
}
