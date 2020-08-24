#include <iostream>
#include <vector>
using namespace std;

void SwapValues(vector<int>&);

int main() {
    vector<int> num(2);

    for (int& n : num) {
        cin >> n;
    }

    SwapValues(num);

    for (int n : num ) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

void SwapValues(vector<int>& numbers) {
    numbers.insert(numbers.begin(), numbers.back());
    numbers.pop_back();
}
