#include <iostream>
#include <string>
using namespace std;

string NumToStringWithCommas(const int& userNum) {
    string line, first, last;
    line = to_string(userNum);
    int mid = line.length() / 2;

    first = line.substr(0, mid);
    last = line.substr(mid);

    return first + ',' + last;
}

int main() {
   int userNum;

   cin >> userNum;

   cout << NumToStringWithCommas(userNum) << endl;

   return 0;
}