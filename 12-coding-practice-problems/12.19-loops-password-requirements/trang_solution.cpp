#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    bool letter = false, num = false, special = false;
    int size;

    getline(cin,password);
    size = password.length();

    for (int i = 0; i < size; i++) {
        if (isalpha(password[i])) {
            letter = true;
        }
        if (isdigit(password[i])) {
            num = true;
        }
        if (password[i] == '!' || password[i] == '#' || password[i] == '%') {
            special = true;
        }
    }

    if (size < 8) {
        cout << "Too short" << endl;
    }
    if (!letter) {
        cout << "Missing letter" << endl;
    }
    if (!num) {
        cout << "Missing number" << endl;
    }
    if (!special) {
        cout << "Missing special" << endl;
    }
    if (size > 7 && letter & num && special) {
        cout << "OK" << endl;
    }

    return 0;
}