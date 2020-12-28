#include <iostream>
#include <vector>
using namespace std;

void SimulateLine(vector<int> customerArrivals) {
    for (size_t i = 0; i < customerArrivals.size(); i++) {
        if (i > 0) {
            if (customerArrivals.at(i-1) != 0) {
                customerArrivals.at(i) = (customerArrivals.at(i) + customerArrivals.at(i-1)) - 1;
            }
        }
    }

    for (auto e : customerArrivals) {
        cout << e << " ";
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