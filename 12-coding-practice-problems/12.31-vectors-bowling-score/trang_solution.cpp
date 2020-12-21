#include <iostream>
#include <vector>
using namespace std;

int main() {
    int val1, val2, score = 0, count = 0, i = 0;
    vector<int> listScores(21), frameScores(10) ;

    for (int i = 0; i < 21; i++) {
        cin >> listScores.at(i);
    }

    while(count != 10) {
        count++;
        val1 = listScores.at(i++);

        if (val1 == 10) {
            score += 10 + listScores.at(i) + listScores.at(i+1);
        }
        else {
            val2 = listScores.at(i++);
            if (val1 + val2 == 10) {
                score += 10 + listScores.at(i);
            }
            else {
                score += val1 + val2;
            }
        }
        frameScores.push_back(score);
    }

    for (auto e : frameScores) {
        if (e == 0) {
            continue;
        }
        cout << e << " ";
    }
    cout << endl;
    return 0;
}