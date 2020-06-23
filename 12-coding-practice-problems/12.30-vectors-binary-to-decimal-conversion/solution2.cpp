#include <iostream>
using namespace std;

int main()
{
    int bit;
    unsigned decimalSum = 0;

    for (int i = 7; i >= 0; --i)
    {
        cin >> bit;
        decimalSum += (bit * (1<<i));
        // alternatively you can #include <math.h>
        // and use pow(2, i) instead
        // but this is such a cool thing to do
    }

    cout << decimalSum << endl;

    return 0;
}
