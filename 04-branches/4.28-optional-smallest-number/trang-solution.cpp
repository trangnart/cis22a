#include <iostream>
using namespace std;

int main() {
    int val_1, val_2, val_3, smallest_num;
    cin >> val_1 >> val_2 >> val_3;

    if (val_1 < val_2) {
        smallest_num = val_1;
    }
    else if (val_2 < val_3) {
        smallest_num = val_2;
    }
    else if (val_3 < val_1) {
        smallest_num = val_3;
    }
    cout << smallest_num << endl;

   return 0;
}