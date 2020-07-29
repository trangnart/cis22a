#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string words;

    do {
        cin >> words >> num;
        if (num != 0 && words != "quit") {
            cout << "Eating " << num << " " << words
                 << " a day keeps the doctor away." << endl;
        }
    } while (num != 0 && words != "quit");

   return 0;
}
