#include <iostream>
using namespace std;

int main() {
   int r;
   int g;
   int b;
   int smallest;

  cin >> r >> g >> b;

  if (r < g) {
    if (r < b)
      smallest = r;
    else
      smallest = b;
  }
  else {
    if (g < b)
      smallest = g;
    else 
      smallest = b;
  }
  r = r - smallest;
  g = g - smallest;
  b = b - smallest;

  cout << r << " " << g << " " << b << endl;

   return 0;
}
