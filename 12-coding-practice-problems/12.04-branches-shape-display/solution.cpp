#include <iostream>
using namespace std;

int main() {
   string userShape;

   cin >> userShape;

   if (userShape == "square") {
      cout << "***" << endl;
      cout << "* *" << endl;
      cout << "***" << endl;
   }
   else if (userShape == "triangle") {
      cout << "  *" << endl;
      cout << " * *" << endl;
      cout << "*****" << endl;
   }

   return 0;
}