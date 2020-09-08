#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string s;

    getline(cin, s);

    size_t lastIdx = s.size() - 1;
    string last3 = lastIdx > 2 ? s.substr(lastIdx-2, 3) : "";

    if (last3 != "..." && s[lastIdx] != '!' && s[lastIdx] != '?') {
        s = regex_replace(s, regex("[[:punct:]]+$"), "") + ".";
    }

    cout << s << endl;

    return 0;
}