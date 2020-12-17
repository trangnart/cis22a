#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int count = 1;
    getline(cin, text);

    for (size_t i = 0; i < text.length(); i++) {
        if(text[i] == ' ') {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}