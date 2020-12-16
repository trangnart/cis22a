#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    size_t fn_space = text.find_first_not_of(" ");
    size_t ln_space = text.find_last_not_of(" ");

    if(fn_space != string::npos || ln_space != string::npos) {
        text = text.substr(fn_space, ln_space + 1);
    }
    cout << text << endl;

    return 0;
}