#include <iostream>
#include <string>

using namespace std;

int main() {
    string plate;

    getline(cin, plate);

    int num = stoi(plate.substr(3, 3)) + 1;

    if (num < 1000) {
        plate.replace(3, 3, to_string(num));
    } else {
        for (int i=2; i>=0; --i) {
            if (plate[i] != 'Z') {
                plate[i]++;
                break;
            } else {
                plate[i] = 'A';
            }
        }
        plate.replace(3, 3, "000");
    }

    cout << plate << endl;

    return 0;
}