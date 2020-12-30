#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

const map<string, string> CHORDS = {
    { "A", "02220-" },
    { "B", "24442-" },
    { "C", "01023-" },
    { "D", "2320--" },
    { "E", "001220" },
    { "F", "112331" },
    { "G", "300023" },
    { "F#m", "244222" }
};

int main() {
    vector<string> chords = {"E","B","E","A","E","F#m","E","A","B"};
    vector<string> tab(6);

    for (auto chr : chords) {
        string seq = CHORDS.at(chr);
        for (size_t i=0; i<6; ++i)
            tab[i].append(1, seq[i]).append(1, '-');
    }

    for (size_t i=0; i<6; ++i)
        cout << static_cast<string>("eBGDAE").at(i)
             << "|-" << tab[i] << endl;

    return 0;
}