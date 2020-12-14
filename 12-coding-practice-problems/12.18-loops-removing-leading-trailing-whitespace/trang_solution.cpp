#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int fn_space = text.find_first_not_of(" ");
    int ln_space = text.find_last_not_of(" ");

    text = text.substr(fn_space, ln_space);
    cout << "/" << text << "/" << endl;

    return 0;
}