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
    int  random;
    string ht;
    random = rand() % 2;

    if (random == 1) {
        ht = "heads";
    }
    else {
        ht = "tails";
    }
    return ht;
}