#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int DigitsToNum(const vector<int> &digits) {
    int total = 0, weight = 1;
    
    for (size_t i = 0; i < digits.size(); i++) {
        total += (digits.at(i) * weight);
        weight *= 10;
    }
    return total;
}


int main() {
    string userDigit;
    vector<int> digitsList;
    int resultNum, num;

    getline(cin, userDigit);
    istringstream ss(userDigit);

    while (ss >> num) {
        digitsList.push_back(num);
    }

   resultNum = DigitsToNum(digitsList);

   cout << resultNum << endl;

   return 0;
}