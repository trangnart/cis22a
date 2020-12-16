#include <iostream>
using namespace std;

int main() {
    int size, numInts;
    cin >> size;

    for(int i = 0; i < size; i++) {
        cin >> numInts;
        cout << numInts;
        if (i < size - 1) {
            cout << ", ";
        }
    }
        cout << endl;
    return 0;
}