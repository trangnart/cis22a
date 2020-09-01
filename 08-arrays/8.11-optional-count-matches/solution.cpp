#include <iostream>
#include <vector>
using namespace std;

int CountMatches(int target, const vector<int>& vec);

int main() {
    vector<int> vec;
    int total, target;

    cin >> target >> total;
    vec.resize(total);

    for ( int i = 0; i < total; ++i ) {
        cin >> vec.at(i);
    }
    cout << CountMatches(target, vec) << endl;

    return 0;
}

int CountMatches(int target, const vector<int>& vec) {
    int count = 0;
    for ( auto n : vec ) {
        if (n == target) {
            count++;
        }
    }
    return count;
}