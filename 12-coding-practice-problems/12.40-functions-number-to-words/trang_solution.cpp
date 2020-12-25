#include <iostream>
#include <string>
using namespace std;

string DigitToWord(int digitIn) {
    if (digitIn == 0) {
        return "zero";
    }
    if (digitIn == 1) {
        return "one";
    }
    if (digitIn == 2) {
        return "two";
    }
    if (digitIn == 3) {
        return "three";
    }
    if (digitIn == 4) {
        return "four";
    }
    if (digitIn == 5) {
        return "five";
    }
    if (digitIn == 6) {
        return "six";
    }
    if (digitIn == 7) {
        return "seven";
    }
    if (digitIn == 8) {
        return "eight";
    }
    if (digitIn == 9) {
        return "nine";
    }
    return "error";
}

string TensDigitToWord(int digitIn) {
    if (digitIn == 2) {
        return "twenty";
    }
    if (digitIn == 3) {
        return "thirty";
    }
    if (digitIn == 4) {
        return "forty";
    }
    if (digitIn == 5) {
        return "fifty";
    }
    if (digitIn == 6) {
        return "sixty";
    }
    if (digitIn == 7) {
        return "seventy";
    }
    if (digitIn == 8) {
        return "eighty";
    }
    if (digitIn == 9) {
        return "ninety";
    }
    return "error";
}

string TwoDigitNumToWords(int numIn) {
    string word;
    if (numIn >= 20 && numIn <= 99) {
        word = TensDigitToWord(numIn / 10) + " " + DigitToWord(numIn % 10);
        return word;
    }
    return "error";
}

int main() {
    int digit;
    cin >> digit;

    cout << TwoDigitNumToWords(digit) << endl;

    return 0;

}