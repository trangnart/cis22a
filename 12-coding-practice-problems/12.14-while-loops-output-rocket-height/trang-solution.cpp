#include <iostream>
using namespace std;

int main()
{
    int rocketHeight = 0;
    int initialVelocity = 0;
    int timeSinceLaunch = 0;

    cin >> initialVelocity;

    while (rocketHeight >= 0)
    {
        rocketHeight = initialVelocity * timeSinceLaunch - 5 *
                       timeSinceLaunch * timeSinceLaunch;
        if (rocketHeight >= 0)
        {
            cout << timeSinceLaunch++ << " " << rocketHeight << endl;
        }
    }
    return 0;
}