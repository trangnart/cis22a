#include <iostream>
#include <string>
#include <vector>
using namespace std;

string g_tabs(const vector<string>& tabs, const string& chord) {
    string tab;
    if (chord == "A") {
        tab = tabs.at(0);
    }
    if (chord == "B") {
        tab = tabs.at(1);
    }
    if (chord == "C") {
        tab = tabs.at(2);
    }
    if (chord == "D") {
        tab = tabs.at(3);
    }
    if (chord == "E") {
        tab = tabs.at(4);
    }
    if (chord == "F") {
        tab = tabs.at(5);
    }
    if (chord == "G") {
        tab = tabs.at(6);
    }
    return tab;
}
int main() {
    int j;
    string chord, tab,
           e = "e|-",
           B = "B|-",
           G = "G|-",
           D = "D|-",
           A = "A|-",
           E = "E|-";
                       //   A         B         C         D          E         F        G
    vector<string> tabs {"02220-", "24442-", "01023-", "2320--", "001220", "112331", "300023"};
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> chord;
        j = 0;
        tab = g_tabs(tabs, chord);

        e += tab[j];
        e += '-';
        B += tab[j+1];
        B += '-';
        G += tab[j+2];
        G += '-';
        D += tab[j+3];
        D += '-';
        A += tab[j+4];
        A += '-';
        E += tab[j+5];
        E += '-';
    }

    cout << e << endl
         << B << endl
         << G << endl
         << D << endl
         << A << endl
         << E << endl;

    return 0;
}