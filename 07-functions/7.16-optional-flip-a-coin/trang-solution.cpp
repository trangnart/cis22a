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
    int  ht;
    ht = rand() % 2;
    
    if (ht == 0) {
        return "heads";
    }
    else {
        return "tails";
    }
}