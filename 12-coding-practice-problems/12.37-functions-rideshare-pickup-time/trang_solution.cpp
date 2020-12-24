#include <iostream>
#include <iomanip>
using namespace std;

int PickupMinutes(int userX, int userY, int d1X, int d1Y, int d2X, int d2Y, int d3X, int d3Y) {
    int time1 = abs((d1X-userX)) + abs((d1Y-userY));
    int time2 = abs((d2X-userX)) + abs((d2Y-userY));
    int time3 = abs((d3X-userX)) + abs((d3Y-userY));
    int min = time3;

    if (time1 <= time2 && time1 <= min) {
        min = time1;
    }
    else if (time2 <= time1 && time2 <= min) {
        min = time2;
    }

    return min*2;
}

int main() {
   int userX, userY;
   int d1X, d1Y;
   int d2X, d2Y;
   int d3X, d3Y;

   cin >> userX;
   cin >> userY;
   cin >> d1X;
   cin >> d1Y;
   cin >> d2X;
   cin >> d2Y;
   cin >> d3X;
   cin >> d3Y;

   cout << PickupMinutes(userX, userY, d1X, d1Y, d2X, d2Y, d3X, d3Y) << endl;

   return 0;
}
