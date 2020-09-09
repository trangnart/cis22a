#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const vector<string> DIR{
        "north", "northeast", "east", "southeast",
        "south", "southwest", "west", "northwest"
    };
    int runwayNum;
    const int SLICE = 45;
    string runwayDirection;

    cin >> runwayNum;

    int runwayDeg = runwayNum * 10;
    int pos = (runwayDeg + SLICE/2) % 360;

    for (int deg = 0; deg < 360; deg += SLICE) {
        if (pos > deg && pos < deg + SLICE) {
            runwayDirection = DIR[deg/SLICE];
            break;
        }
    }

    cout << runwayDeg
         << " (" << runwayDirection << ")"
         << endl;

    return 0;
}