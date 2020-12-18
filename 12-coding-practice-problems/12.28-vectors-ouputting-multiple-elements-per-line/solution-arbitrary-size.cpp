#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<int> array;
    int num;

    cout << "Enter a list of number (-1 to end): ";

    while (cin >> num && num != -1)
        array.push_back(num);

    for (int i=1; i<=array.size(); i++)
        cout << setw(3)
             << array[i-1]
             << (i % 4 ? " " : "\n");

    return 0;
}