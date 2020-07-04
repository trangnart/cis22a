#include <iostream>
using namespace std;

int main() {
    int userNum, x;

    cin >> userNum >> x;

    cout << userNum / x << " " 
         << userNum / (x * x) << " " 
         << userNum / (x * x * x) << " " << endl;

   return 0;
}
