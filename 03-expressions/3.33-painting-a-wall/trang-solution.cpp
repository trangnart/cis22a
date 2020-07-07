#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double wallHeight;
    double wallWidth;
    double wallArea;

    cout << "Enter wall height (feet):" << endl;
    cin  >> wallHeight;

    cout << "Enter wall width (feet):" << endl;
    cin >> wallWidth;

    wallArea = wallHeight * wallWidth;
    
    cout << fixed << setprecision(2);
    cout << "Wall area: " << wallArea << " square feet" << endl;

    cout << "Paint needed: " << wallArea / 350 << " gallons" << endl;

    cout << "Cans needed: " << static_cast<int>(round(wallArea / 350)) << " can(s)" << endl;

   return 0;
}