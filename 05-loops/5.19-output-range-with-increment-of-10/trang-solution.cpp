#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
      cout << "Second integer can't be less than the first." << endl;
    }

    for (int i = y; i >= x; ++i) {
        while (x <= i) {
            cout << x << " ";
            x = x + 10;
        }
    }

   return 0;
}
