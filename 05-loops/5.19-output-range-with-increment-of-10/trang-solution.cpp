#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
      cout << "Second integer can't be less than the first." << endl;
    }

    else {
      for (int i = x; i <= y; i+=10) {
        cout << i << " ";
      }
    }

   return 0;
}
