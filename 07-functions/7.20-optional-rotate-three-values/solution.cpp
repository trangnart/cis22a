#include <iostream>
using namespace std;

void RotateRight(int& p1, int& p2, int& p3) {
    int tmp = p3;
    p3 = p2;
    p2 = p1;
    p1 = tmp;
}

int main() {
    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;
    RotateRight(n1, n2, n3);

    cout << n1 << " "
         << n2 << " "
         << n3 << endl;

    return 0;
}