#include <iostream>
using namespace std;

int main()
{
    int x1, y1, sol1,
        x2, y2, sol2,
        x, y;
    cin >> x1 >> y1 >> sol1;
    cin >> x2 >> y2 >> sol2;
    bool foundAnswer = false;

    for (x = -10; x <= 10 && !foundAnswer; ++x)
    {
        for (y = -10; y <= 10 && !foundAnswer; ++y)
        {
            int test_sol1 = x1 * x + y1 * y;
            int test_sol2 = x2 * x + y2 * y;
            if (test_sol1 == sol1 && test_sol2 == sol2)
            {
                cout << x << " " << y << endl;
                foundAnswer = true;
            }
        }
    }
    if (!foundAnswer)
    {
        cout << "No solution\n";
    }

    return 0;
}