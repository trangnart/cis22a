#include <iostream>
#include <vector>
using namespace std;

void SimulateLine(vector<int> customerArrivals) {
    int previous;
    cout << customerArrivals.at(0) << " ";

    for (size_t i = 1; i < customerArrivals.size(); i++) {
        previous = customerArrivals[i-1];
        if (previous) {
            customerArrivals.at(i) += customerArrivals.at(i-1) - 1;
        }
        cout << customerArrivals.at(i) << " ";
    }
    cout << endl;
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