#include <iostream>
#include <cstdlib>
using namespace std;

string HeadsOrTails();

int main() {
    int user_input;
    cin >> user_input;

    srand(2);
    for (int i = 0; i < user_input; ++i) {
        cout << HeadsOrTails() << endl;
    }
   return 0;
}

string HeadsOrTails() {
    if (rand() % 2) {
        return "heads";
    }

    return "tails";
}