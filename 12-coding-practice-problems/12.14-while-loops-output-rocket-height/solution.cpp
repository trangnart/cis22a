#include <iostream>
using namespace std;

int main() {
   int rocketHeight = 0;
   int initialVelocity = 0;
   int timeSinceLaunch = 0;

   cin >> initialVelocity;

   while (rocketHeight >= 0) {
      cout << timeSinceLaunch << " " << rocketHeight << endl;
      timeSinceLaunch = timeSinceLaunch + 1;
      rocketHeight = (initialVelocity * timeSinceLaunch ) - (5 * timeSinceLaunch * timeSinceLaunch);
   }

   return 0;
}

/* NOTES:
* The number of iterations isn't known beforehand, meaning a while loop is usually more appropriate than a for loop.
* The loop only executes if rocketHeight >= 0, so doesn't execute when rocketHeight becomes negative.
*/