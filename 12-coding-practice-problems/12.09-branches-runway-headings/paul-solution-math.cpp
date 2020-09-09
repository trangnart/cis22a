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

    cin >> runwayNum;

    int deg = runwayNum * 10;
    int index = ((deg + 22) / 45) % 8;

    cout << deg << " degrees (" << DIR[index] << ")\n";

    return 0;
}