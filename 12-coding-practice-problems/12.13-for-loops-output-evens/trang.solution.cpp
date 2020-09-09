#include <iostream>
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
        cout << "0" << endl;
    }
    else
    {
        if (n % 2 != 0)
        {
            n = n - 1;
        }
        for (int i = n; i > -1; i -= 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}