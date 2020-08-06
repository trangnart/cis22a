#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const string first = "Jane",
                 last = "Tran";
    const int HEIGHT = 6;
    const char ICON = '*';

    cout << setfill('-') << setw(41) << "" << endl
         << setfill('>') << setw(20) << right << first << " "
         << setfill('<') << setw(20) << left << last << endl
         << setfill('-') << setw(41) << "" << endl;

    for (int i = 0; i < HEIGHT; ++i) {
        cout << setfill(' ')  << setw(HEIGHT-i) << ""
             << setfill(ICON) << setw(i)        << ""
             << ICON
             << setfill(ICON) << setw(i)        << ""
             << setfill(' ')  << setw(HEIGHT-i) << ""
             << endl;
    }
    return 0;
}