#include <iostream>
#include <vector>
using namespace std;

void RotateRight(vector<int>& rotate);

int main() {
    vector<int> rotate(3);

    for (auto& i : rotate) {
        cin >> i;
    }

    RotateRight(rotate);

    return 0;
}

void RotateRight(vector<int>& rotate) {
    int tmp = rotate[rotate.size() -1];

    for (int i = rotate.size()-1; i > 0; --i) {
        rotate[i] = rotate[i-1];
    }
    rotate[0]= tmp;

    for (auto& i : rotate) {
        cout << i << " ";
    }
    cout << endl;
}