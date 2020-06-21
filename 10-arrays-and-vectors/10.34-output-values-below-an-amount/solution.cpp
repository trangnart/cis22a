#include <iostream>
#include <vector>
using namespace std;

vector<int> GetUserValues(vector<int>& userValues, int numValues) {
    userValues.resize(numValues);
    for ( int i = 0; i < numValues; ++i ) {
        cin >> userValues.at(i);
    }
    return userValues;
}

void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold) {
    for ( unsigned long i = 0; i < userValues.size(); ++i ) {
        if ( userValues.at(i) <= upperThreshold ) {
            cout << userValues.at(i) << " ";
        }
    }
    cout << endl;
}

int main() {
   vector<int> userValues;
   int upperThreshold;
   int numValues;

   cin >> numValues;
   userValues = GetUserValues(userValues, numValues);

   cin >> upperThreshold;
   OutputIntsLessThanOrEqualToThreshold(userValues, upperThreshold);

   return 0;
}