#include <iostream>
using namespace std;

int main() {
    bool sort = true;
    int num1, num2, size;
    cin >> size >> num1;

    for (int i = 1; i < size; i++) {
        cin >> num2;
        if (num1 < num2) {
            num1 = num2;
        }
        else {
            sort = false;
            cout << "Unsorted" << endl;
            break;
        }
    }
    if (sort) {
        cout << "Sorted" << endl;
    }

    return 0;
}