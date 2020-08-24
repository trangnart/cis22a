#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

string IntegerToReverseBinary(int integerValue);
string ReverseString(string userString);
void NumberToBinary(const string& filename);

int main() {
    const string FILENAME = "input.txt";
    NumberToBinary(FILENAME);

//    string binary = IntegerToReverseBinary(num);
//    cout << binary << endl;
//    cout << ReverseString(binary) << endl;

    return 0;
}

string IntegerToReverseBinary(int integerValue) {
    int bit;
    string binary = "";

    while (integerValue > 0) {
        bit = integerValue % 2;
        binary += to_string(bit);
        integerValue /= 2;
    }

    return binary;
}

// string in-place reversal
string ReverseString(string userString) {
    size_t back = userString.length()-1;
    char temp;

    for (size_t front=0; front <= back/2; ++front) {
        temp = userString.at(back - front);
        userString.at(back - front) = userString.at(front);
        userString.at(front) = temp;
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
                cout << setw(10) << right << num
                     << " -> "
                     << ReverseString(IntegerToReverseBinary(num))
                     << endl;
            }
        }
    }
}