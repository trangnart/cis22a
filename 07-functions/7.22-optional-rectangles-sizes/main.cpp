#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool FirstRectangleSmaller(int, int, int, int, int, int, int, int);
void CompareRectangles(const string &);

int main()
{
    // const string FILENAME = "input.txt";

    cout << FirstRectangleSmaller(1,1,2,3,0,0,10,10) << endl;
    cout << FirstRectangleSmaller(0,0,10,10,-12,-12,-1,-1) << endl;

    // CompareRectangles(FILENAME);

    return 0;
}

bool FirstRectangleSmaller(int r1xul, int r1yul, int r1xbr, int r1ybr,
                           int r2xul, int r2yul, int r2xbr, int r2ybr)
{
    // implement this first
}

void CompareRectangles(const string &filename)
{
    // afterwards work on this
}