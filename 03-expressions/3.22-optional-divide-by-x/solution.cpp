#include <iostream>
using namespace std;

int main() {
   int userNum;
   int x;

   cin >> userNum;
   cin >> x;

   cout << userNum / x << " "
        << userNum / (x * x) << " "
        << userNum / (x * x * x) << endl;

   return 0;
}
