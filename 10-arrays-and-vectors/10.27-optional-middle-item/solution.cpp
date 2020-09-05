#include <iostream>
#include <vector>
using namespace std;

void InputUntilNegative(vector<int>& list);

int main() {
    vector<int> list;

    InputUntilNegative(list);

    if (list.size() > 9) {
        cout << "Too many inputs.\n";
        return 1;
    }

    size_t middle = list.size() / 2;
    cout << list[middle] << endl;

    return 0;
}

void InputUntilNegative(vector<int>& list) {
    int num;

    do {
        cin >> num;
        if (num != -1) {
            list.push_back(num);
        }
    } while (num != -1);
}