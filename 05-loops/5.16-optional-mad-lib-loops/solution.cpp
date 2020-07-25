#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int num;

    do {
        cin >> word >> num;
        if (num > 0) {
            cout << "Eating " << num
                 << " " << word
                 << " a day keeps the doctor away.\n";
        }
    } while (num != 0);

    return 0;
}