#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double height, width, diagonal;
    cin >> diagonal;
    cout << fixed << setprecision(1);
    
    for (width = 1.0; width < diagonal; width++) {
        height = sqrt((diagonal*diagonal) - (width*width));
        if (width > height) {
            cout << width << " " << height << endl;
        }
    }
    return 0;
}