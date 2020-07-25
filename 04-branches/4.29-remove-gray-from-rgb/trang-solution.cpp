#include <iostream>
using namespace std;

int main() {
    int red, green, blue, smallest_val;
    cin >> red >> green >> blue;

    if (red < green) {
        smallest_val = red;
    }
    else if (green < blue) {
        smallest_val = green;
    }
    else if (blue < red) {
        smallest_val = blue;
    }
    
    cout << red - smallest_val << " "
         << green - smallest_val << " "
         << blue - smallest_val << endl;

   return 0;
}
