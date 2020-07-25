#include <iostream>
#include <string>
using namespace std;

int main() {
    int num, bit;
    string binary = "";
    cin >> num;

    while (num > 0) {
        bit = num % 2;
        binary += to_string(bit);
        num /= 2;
    }
    cout << binary << endl;
    return 0;
}