#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence = "I have a crazy hamster!",
        word;

    // convert the string into a stream
    stringstream stream(sentence);

    // while we can read from the stream
    while (stream >> word) {
        cout << word << endl;
    }

    return 0;
}