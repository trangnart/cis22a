#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double x;
    double y;
    double z;

    cin >> x >> y >> z;
    cout << pow(x,z) << " " << pow(x,pow(y,z)) << " " << fabs(y) << " " << sqrt(pow(x*y,z)) << endl;

   return 0;
}
