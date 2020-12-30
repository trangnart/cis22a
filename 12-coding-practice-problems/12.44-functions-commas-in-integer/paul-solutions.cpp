#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

string n2s_string(const int num) {
    string s = to_string(num);
    size_t pos = 3;

    reverse(s.begin(), s.end());

    while (pos < s.length()) {
        s.insert(pos, 1, ',');
        pos += 4;
    }

    reverse(s.begin(), s.end());

    return s;
}

int main() {
    vector<int> v = {1,12,123,1234,12345,123456,1234567,12345678};

    for (auto n : v)
        cout << setw(20) << n2s_string(n) << endl;
    return 0;
}