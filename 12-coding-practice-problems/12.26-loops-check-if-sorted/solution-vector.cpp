#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>);

int main() {
    vector<int> list;
    int size;
    cin >> size;
    list.resize(size);
    for ( int i = 0; i < size; ++ i ) {
        cin >> list.at(i);
    }
    cout << (isSorted(list) ? "Sorted" : "Unsorted")
         << endl;
    return 0;
}

bool isSorted(vector<int> array) {
    for ( int i = 1; i < array.size(); ++ i ) {
        if ( array.at(i) <= array.at(i-1) )
            return false;
    }
    return true;
}