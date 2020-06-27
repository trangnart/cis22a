#include <iostream>
using namespace std;

int main() {
  char triangleChar;
  int triangleHeight;

  cout << "Enter a character:" << endl;
  cin >> triangleChar;
   
  cout << "Enter triangle height:" << endl;
  cin >> triangleHeight;
     
  for (int level = 0; level <= triangleHeight; ++level) {
    for (int i = 0; i < level; ++i) {
      cout << triangleChar << " ";
    }
    cout << endl;
  }
   
  return 0;
}