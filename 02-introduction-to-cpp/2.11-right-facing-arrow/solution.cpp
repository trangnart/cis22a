#include <iostream>
using namespace std;

int main() {
   int baseChar;
   int headChar;

   cin >> baseChar;
   cin >> headChar;
   cout << "     " << headChar << endl;
   cout << "     " << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << headChar << endl;
   cout << baseChar << baseChar << baseChar << baseChar << baseChar << headChar << headChar << headChar << endl;
   cout << "     " << headChar << headChar << endl;
   cout << "     " << headChar << endl;
   return 0;
}
