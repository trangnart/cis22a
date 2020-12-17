#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence, word;
    getline(cin, sentence);
    stringstream ss(sentence);
    int count = 0;
    while (ss >> word) count++;
    cout << count;
    return 0;
}