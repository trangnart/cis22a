#include <iostream>
using namespace std;

int main() {
    int input;
    int right, left;

    cin >> input;

    if (input > 98 && input < 20) {
        cout << "Input must be 20-98" << endl;
    }

    else {
        do {
            right = input % 10;
            left = input / 10;
            cout << input << " ";
            --input;
        }
        while (left != right);
    }
    
   return 0;
}
