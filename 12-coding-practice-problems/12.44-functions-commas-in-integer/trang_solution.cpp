#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string NumToStringWithCommas(int userNum) {
    string str, num2str = to_string(userNum);
    reverse(num2str.begin(), num2str.end());

    for (size_t i = 0; i < num2str.length(); i++) {
        if (i % 3 == 0 && i > 0) {
            str += ',';
        }
        str += num2str[i];
    }
    reverse(str.begin(), str.end());

    return str;
}

int main() {
    int userNum;

    cin >> userNum;

    cout << NumToStringWithCommas(userNum) << endl;

    return 0;
}