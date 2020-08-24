#include <iostream>
#include <fstream>
using namespace std;

string IntegerToReverseBinary(int integerValue);
string ReverseString(string userString);
void NumberToBinary(const string& filename);

int main() {
    const string FILENAME = "input.txt";

    NumberToBinary(FILENAME);

    return 0;
}

string IntegerToReverseBinary(int integerValue) {
    int x;
    string binary;

    while (integerValue > 0) {
        x = integerValue % 2;
        binary += to_string(x);
        integerValue = integerValue / 2;
    }
    return binary;
}

string ReverseString(string userString) {
    size_t pos = userString.length()-1;

    for (size_t i = 0; i <= pos / 2; ++i) {
        int temp = userString.at(i);
        userString.at(i) = userString.at(pos - i);
        userString.at(pos-i) = temp;
    }
    return userString;
}

void NumberToBinary(const string& filename) {
    ifstream inFS(filename);

    if (inFS.is_open()) {
        int num;

        while(!inFS.eof()) {
            inFS >> num;

            if (!inFS.fail()) {
                cout << num << " -> "
                     << ReverseString(IntegerToReverseBinary(num))
                     << endl;
            }
        }
    }
    inFS.close();
}