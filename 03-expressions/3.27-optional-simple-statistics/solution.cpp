#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX = 4;
    int sum = 0, product = 1;

    for (int i = 0; i < MAX; ++i)
    {
        int x;
        cin >> x;
        sum += x;
        product *= x;
    }

    cout << fixed << setprecision(3);

    cout << product << " "
         << sum / MAX << endl;
    cout << static_cast<double>(product) << " "
         << sum / static_cast<double>(MAX) << endl;

    return 0;
}
