#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> array;
    int num;

    cout << "Enter a list of number (-1 to end): ";

    while (cin >> num && num != -1) {
        array.push_back(num);
    }

    for (size_t i=1; i<=array.size(); i++) {
        cout << array.at(i-1) << " ";

        if (i % 4 == 0) {
            cout << endl;
        }
    }
    return 0;
}