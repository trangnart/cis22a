#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    while (num != 0) {
        cout << num % 10 << endl;
        num /= 10;
    }
    return 0;
}