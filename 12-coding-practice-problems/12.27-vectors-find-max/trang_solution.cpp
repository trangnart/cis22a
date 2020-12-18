#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int item, size;
    vector<int> listItems;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> item;
        listItems.push_back(item);
    }
    cout << *max_element(listItems.begin(), listItems.end()) << endl;

    return 0;
}