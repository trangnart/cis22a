#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int count = 0;
    string text;

    getline(cin, text);
    stringstream ss(text);

    while(ss >> text) {
        count++;
    }
    cout << count << endl;
    return 0;
}