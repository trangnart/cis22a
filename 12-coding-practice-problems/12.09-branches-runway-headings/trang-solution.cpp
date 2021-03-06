#include <iostream>
using namespace std;

int main()
{
    string direction = "east";
    int x;
    cin >> x;

    if (x > 0 && x < 37) {
        int runwayDeg = x * 10;

        if ((runwayDeg > 337 && runwayDeg < 361) ||
            (runwayDeg > 0 && runwayDeg < 23))
        {
            direction = "north";
        }
        else if ((runwayDeg > 22) && (runwayDeg < 68))
        {
            direction = "northneast";
        }
        else if ((runwayDeg > 112) && (runwayDeg < 158))
        {
            direction = "southeast";
        }
        else if ((runwayDeg > 157) && (runwayDeg < 203))
        {
            direction = "south";
        }
        else if ((runwayDeg > 202) && (runwayDeg < 248))
        {
            direction = "southwest";
        }
        else if ((runwayDeg > 247) && (runwayDeg < 293))
        {
            direction = "west";
        }
        else if ((runwayDeg > 292) && (runwayDeg < 338))
        {
            direction = "northwest";
        }
        cout << runwayDeg << " degrees (" << direction << ")" << endl;
    }

    else {
        cout << "The valid inputs are 1-36." << endl;
    }

    return 0;
}