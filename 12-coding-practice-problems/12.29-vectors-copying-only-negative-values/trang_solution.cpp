#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> listInts, listNegInts;
    int size, num;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> num;
        listInts.push_back(num);

        if (listInts[i] < 0) {
            listNegInts.push_back(listInts[i]);
        }
    }
    cout << listNegInts.size() << endl;

    for (size_t i = 0; i < listNegInts.size(); i++) {
        cout << listNegInts[i] << endl;
    }
    return 0;
}