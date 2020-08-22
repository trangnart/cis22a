#include <iostream>
#include <vector>
using namespace std;

void RotateRight(vector<int>& rotation);

int main() {
    vector<int> rotation(3);

    for (auto& num : rotation) {
        cin >> num;
    }

    RotateRight(rotation);

    return 0;
}

void RotateRight(vector<int>& rotation) {
    int last_element = rotation.size() -1;
    int tmp = rotation[last_element];

    for (int i = last_element; i > 0; --i) {
        rotation[i] = rotation[i-1];
    }
    rotation[0]= tmp;

    for (auto& i : rotation) {
        cout << i << " ";
    }
    cout << endl;
}