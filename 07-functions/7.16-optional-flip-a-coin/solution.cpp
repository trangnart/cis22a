#include <iostream>
#include <ctime>
using namespace std;

string HeadsOrTails() {
    return (rand() % 2) ? "heads" : "tails";
}

int main() {
    int toss = 5;
    time_t t = time(0);

    srand(t);
    cout << "time: " << t << endl;
    for(int i = 0; i < 5; ++i) {
        for (int j = 0; j < toss; ++j) {
            cout << HeadsOrTails() << " ";
        }
        cout << endl;
    }

    return 0;
}