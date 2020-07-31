#include <iostream>
#include <string>
using namespace std;

int main() {
    int arrowBaseHeight, arrowBaseWidth, arrowHeadWidth;
    cout << "Enter arrow base height:" << endl;
    cin >> arrowBaseHeight;

    cout << "Enter arrow base width:" << endl;
    cin >> arrowBaseWidth;

    cout << "Enter arrow head width:" << endl;
    cin >> arrowHeadWidth;

    for (int i = 0; i < arrowBaseHeight; ++i) {
        for (int i = 0; i < arrowBaseWidth; ++i) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = arrowHeadWidth; i >= 1; --i) {
        for (int z = i; z >= 1; --z) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
