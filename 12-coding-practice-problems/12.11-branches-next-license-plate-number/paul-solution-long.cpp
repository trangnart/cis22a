#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string Num2String(const int num);

int main() {
    string plate, nextPlate;

    getline(cin, plate);

    // get the numbers first, and + 1
    int num = stoi(plate.substr(3, 3)) + 1;

    // not > 100 we're done
    if (num < 1000) {
        nextPlate = plate.substr(0, 3) + Num2String(num);
    } else {
        if (plate[2] != 'Z') {
            plate[2]++;
        } else {
            plate[2] = 'A';

            if (plate[1] != 'Z') {
                plate[1]++;
            } else {
                plate[1] = 'A';

                if (plate[0] != 'Z') {
                    plate[0]++;
                } else {
                    plate[0] = 'A';
                }
            }
        }

        nextPlate = plate.replace(3, 3, "000");
    }

    cout << nextPlate << endl;
    return 0;
}

string Num2String(const int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}