#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    cout << "<table>" << endl;
    for (int i = 0; i < row; i++) {
        cout << "<tr> ";
        for (int j = 0; j < col; j++) {
            cout << "<td> c </td> ";
        }
        cout << "</tr>" << endl;
    }
    cout << "</table>" << endl;
    return 0;
}