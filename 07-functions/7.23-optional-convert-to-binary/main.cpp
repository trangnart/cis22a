#include <iostream>
using namespace std;

string IntegerToReverseBinary(int integerValue);
string ReverseString(string userString);
void NumberToBinary(const string& filename);

int main() {
    // Part 1
    string binary = IntegerToReverseBinary(6);
    cout << binary << endl;
    cout << ReverseString(binary) << endl;

    // Part 2
    // const string FILENAME = "input.txt";
    // NumberToBinary(FILENAME);

    return 0;
}

string IntegerToReverseBinary(int integerValue) {
    // your implementation
}

string ReverseString(string userString) {
    // your implementation
}

void NumberToBinary(const string& filename) {
    ifstream inFS(filename);

    if (inFS.is_open()) {
        int num;
        while(!inFS.eof()) {
            inFS >> num;
            if (!inFS.fail()) {
                // your implementation
            }
        }
    }
}