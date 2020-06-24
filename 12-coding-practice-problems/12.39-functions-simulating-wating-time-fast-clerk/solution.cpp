#include <iostream>
#include <vector>
using namespace std;

void SimulateLine(vector<int> customerArrivals) {
   unsigned int i;
   int lineLength;

   // Perform simulation for 10 steps (simulating 10 minutes)
   lineLength = 0;
   for (i = 0; i < customerArrivals.size(); ++i) {
      if (lineLength > 0) {
         lineLength -= 1;  // Each minute, the clerk finishes serving 1 customer
      }
      lineLength += customerArrivals.at(i); // This many new customers arrived into line
      cout << lineLength << " ";
   }
   cout << endl;
}

/* NOTES

* Care must be taken not to decrement lineLength if the line was 0, since no customers are waiting.

* Outputting a space after each integer allows for simpler code; otherwise, some additional logic is necessary to
  precede each item (except the first) with a space.

*/

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