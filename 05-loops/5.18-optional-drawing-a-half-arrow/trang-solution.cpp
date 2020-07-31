#include <iostream>
#include <string>
using namespace std;

int main() {
    int arrowBaseHeight, arrowBaseWidth;
    int arrowHeadWidth = -1;
    
    cout << "Enter arrow base height:" << endl;
    cin >> arrowBaseHeight;

    cout << "Enter arrow base width:" << endl;
    cin >> arrowBaseWidth;

    while (arrowHeadWidth <= arrowBaseWidth) {
        cout << "Enter arrow head width:" << endl;
        cin >> arrowHeadWidth;
    }

    for (int i = 0; i < arrowBaseHeight; ++i) {
        for (int j = 0; j < arrowBaseWidth; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = arrowHeadWidth; i >= 1; --i) {
        for (int j = i; j >= 1; --j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
