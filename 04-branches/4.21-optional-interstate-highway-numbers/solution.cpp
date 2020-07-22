#include <iostream>
#include <string>
using namespace std;

int main()
{
    int highwayNumber;
    string orientation = "north/south",
           highwayType = "primary";

    cin >> highwayNumber;

    // first, is this valid?
    if (highwayNumber < 1 || highwayNumber > 999) {
        cout << highwayNumber
             << " is not a valid interstate highway number.\n";
        return 1;
    }
    // now, all numbers are valid
    if (highwayNumber % 2 == 0) {
        // even: change orientation to east/west
        orientation = "east/west";
    }

    if (highwayNumber >= 100) {
        // 3 numbers: change type to aux
        // % 100 to take only the remainder
        highwayType = "auxiliary, Serving I-"
                    + std::to_string(highwayNumber % 100);
    }

    // got all the parts, let put them together
    cout << "I-" << highwayNumber
         << " is " << highwayType
         << ", going " << orientation << endl;

    return 0;
}