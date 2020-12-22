#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vec = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,0,1,0,1,1,0,1,1,1,0,0},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0}
        };

    for (auto array : vec) {
        int first = 0;
        bool noneSelected = true;

        cout << "{ ";
        for (auto e : array) {
            cout << e << " ";
        }
        cout << "}\n";

        for (int i=0; i<array.size(); i++)
        {
            int prev = i > 0 ? array[i-1] : 0;
            int next = i < array.size()-1 ? array[i+1] : 0;
            int offset = i - first;

            if (!prev && array[i]) {        // first one
                cout << i+1;
                first = i;
                noneSelected = false;
            } else if (!next && array[i]) { // last one
                cout << (offset > 1 ? "-" : " ") << i+1;
            } else if (!array[i] && prev) { // other
                cout << " ";
            }
        }
        cout << (noneSelected ? "None" : "") << endl;
    }

    return 0;
}