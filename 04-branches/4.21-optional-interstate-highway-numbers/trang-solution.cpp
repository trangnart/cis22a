#include <iostream>
#include <string>
using namespace std;

int main() {
    int highway_num, serving;
    string direction = "north/south.";
    string type = "primary";
    cin >> highway_num;

    if (highway_num > 0 && highway_num < 100) {
        if (highway_num % 2 == 0)
        direction = "going east/west.";

    cout << "I-" << highway_num << " is "
         << type << ", " << direction << endl;
    }

    if (highway_num > 99 && highway_num < 1000) {
        type = "auxiliary";
        serving = highway_num % 100;
        if (serving % 2 == 0)
            direction = "going east/west.";

    cout << "I-" << highway_num << " is " << type << ", "
         << "serving I-" << serving << ", " << direction << endl;
    }
    
    if (highway_num < 1 || highway_num > 999 )
        cout << highway_num << " is not a valid interstate highway number." << endl;

    return 0;
}
