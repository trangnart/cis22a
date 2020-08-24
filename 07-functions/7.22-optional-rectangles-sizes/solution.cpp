#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool FirstRectangleSmaller(int, int, int, int, int, int, int, int);
void CompareRectangles(const string &);

int main()
{
    const string FILENAME = "input.txt";

    // cout << FirstRectangleSmaller(1,1,2,3,0,0,10,10) << endl;

    CompareRectangles(FILENAME);

    return 0;
}

bool FirstRectangleSmaller(int r1xul, int r1yul, int r1xbr, int r1ybr,
                           int r2xul, int r2yul, int r2xbr, int r2ybr)
{
    int r1Area = (r1xbr - r1xul) * (r1ybr - r1yul);
    int r2Area = (r2xbr - r2xul) * (r2ybr - r2yul);
    return abs(r1Area) < abs(r2Area);
}

void CompareRectangles(const string &filename)
{
    ifstream inFS(filename);
    int r1x1, r1y1, r1x2, r1y2,
        r2x1, r2y1, r2x2, r2y2;

    if (!inFS.is_open())
    {
        cout << "Cannot open file " << filename << endl;
        return;
    }

    while (!inFS.eof())
    {
        inFS >> r1x1 >> r1y1 >> r1x2 >> r1y2 >> r2x1 >> r2y1 >> r2x2 >> r2y2;

        if (inFS.fail())
        {
            continue;
        }

        string tf =
            FirstRectangleSmaller(r1x1, r1y1, r1x2, r1y2, r2x1, r2y1, r2x2, r2y2)
            ? "true" : "false";

        cout << "(" << r1x1 << "," << r1y1 << ") "
             << "(" << r1x2 << "," << r1y2 << ") < "
             << "(" << r2x1 << "," << r2y1 << ") "
             << "(" << r2x2 << "," << r2y2 << ") is "
             << tf << endl;
    }
}