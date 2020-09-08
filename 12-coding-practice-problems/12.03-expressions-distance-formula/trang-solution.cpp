#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char c;
    double x1, y1, x2, y2;

    cin >> c >> x1 >> c >> y1 >> c
        >> c >> x2 >> c >> y2 >> c;

    int d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << d << endl;

    return 0;
}