#include <iostream>
#include <vector>
using namespace std;

void SimulateLine(vector<int> customerArrivals) {

   /* Type your code here. */

}


int main() {
   int i;
   vector<int> customerArrivals(10);

   // Get customer arrival data
   for (i = 0; i < 10; ++i) {
      cin >> customerArrivals.at(i);
   }

   SimulateLine(customerArrivals);

   return 0;
}