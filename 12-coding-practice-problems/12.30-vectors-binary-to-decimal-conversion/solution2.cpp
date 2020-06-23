#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bit;
    unsigned decimalSum = 0;

    for (int i = 7; i >= 0; --i)
    {
        cin >> bit;
        decimalSum += (bit * pow(2, i));
    }

    cout << decimalSum << endl;

    return 0;
}
