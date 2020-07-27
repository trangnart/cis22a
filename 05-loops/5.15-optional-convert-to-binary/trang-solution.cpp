#include <iostream>
#include <string>
using namespace std;

int main() {
    int num, x;
    string binary;

    cin >> num;

    while (num > 0) {
        x = num % 2;
        binary += to_string(x);
        num = num / 2;
    }
    cout << binary << endl;

   return 0;
}
