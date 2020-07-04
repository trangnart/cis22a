#include <iostream>
using namespace std;

int main() {
   int baseChar;
   int headChar;

   cin >> baseChar;
   cin >> headChar;
   cout << "     " << headChar << endl
        << "     " << headChar << headChar << endl
        << baseChar << baseChar << baseChar << baseChar << baseChar
        << headChar << headChar << headChar << endl
        << baseChar << baseChar << baseChar << baseChar << baseChar
        << headChar << headChar << headChar << headChar << endl
        << baseChar << baseChar << baseChar << baseChar << baseChar
        << headChar << headChar << headChar << endl
        << "     " << headChar << headChar << endl
        << "     " << headChar << endl;
   return 0;
}
