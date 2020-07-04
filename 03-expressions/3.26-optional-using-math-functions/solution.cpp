#include <iostream>
#include <cmath>
#include <vector>
#include <stdlib.h>
using namespace std;

// takes input from the command line, if given
int main(int argc, char const *argv[])
{
    vector<double> xyz;

    for (int i=1; i<argc; ++i) {
        xyz.push_back(strtod(argv[i], NULL));
    }

    if (xyz.size() == 3) {
        cout << pow(xyz.at(0), xyz.at(2)) << " ";
        cout << pow(xyz.at(0), pow(xyz.at(1), xyz.at(2))) << " ";
        cout << fabs(xyz.at(1)) << " ";
        cout << sqrt(pow(xyz.at(0) * xyz.at(1), xyz.at(2))) << endl;
    }
    return 0;
}
