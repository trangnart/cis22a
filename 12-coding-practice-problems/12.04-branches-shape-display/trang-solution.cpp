#include <iostream>
using namespace std;

int main()
{
    string shape;
    cin >> shape;

    if (shape == "square")
    {
        cout << "***" << endl
             << "* *" << endl
             << "***" << endl;
    }
    else if (shape == "triangle")
    {
        cout << "  *" << endl
             << " * *" << endl
             << "*****" << endl;
    }

    return 0;
}