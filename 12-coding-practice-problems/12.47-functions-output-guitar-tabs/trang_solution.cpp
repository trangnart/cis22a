#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;

map<string, string> CHORDS = {
    {"A", "02220-"},
    {"B", "24442-"},
    {"C", "01023-"},
    {"D", "2320--"},
    {"E", "001220"},
    {"F", "112331"},
    {"G", "300023"}
};

int main() {
    vector<string> chords;
    vector<string> tab(6);
    string chrd;
    const string GSTRING = "eBGDAE";
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> chrd;
        chords.push_back(chrd);
    }

    for (auto e : chords) {
        string seq = CHORDS.at(e);

        for (int i=0; i<6; ++i) {
            tab[i].append(1, seq[i]).append(1, '-');
        }
    }

    for (int i=0; i<6; ++i) {
        cout << GSTRING[i] << "|-" << tab[i] << endl;
    }
    return 0;
}