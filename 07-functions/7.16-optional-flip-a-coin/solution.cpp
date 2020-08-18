#include <iostream>
using namespace std;

string HeadsOrTails() {
    return (rand() % 2) ? "heads" : "tails";
}

int main() {
    int toss;

    cin >> toss;

    srand(2);
    for(int i = 0; i < toss; ++i) {
        cout << HeadsOrTails() << endl;
    }

    return 0;
}