#include <iostream>
using namespace std;

int main() {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;
   
   cout << "Enter arrow base height:" << endl;
   cin >> arrowBaseHeight;
   
   cout << "Enter arrow base width:" << endl;
   cin >> arrowBaseWidth;
   
   cout << "Enter arrow head width:" << endl;
   cin >> arrowHeadWidth;
   cout << endl;
   
   // Draw arrow base (height = 3, width = 2)
   cout << "**" << endl;
   cout << "**" << endl;
   cout << "**" << endl;
    
   // Draw arrow head (width = 4)
   cout << "****" << endl;
   cout << "***" << endl;
   cout << "**" << endl;
   cout << "*" << endl;
   
   return 0;
}