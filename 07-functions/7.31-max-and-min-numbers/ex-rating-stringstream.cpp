#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string Rating(int score, const char symbol='*') {
    stringstream output, stars;
    stars << setw(score) << setfill(symbol) << "";
    output << setw(10) << stars.str();
    return output.str();
}

int main() {

    cout << Rating(10, '-') << endl;
    cout << Rating(4) << endl;
    cout << Rating(2) << endl;
    cout << Rating(1) << endl;
    cout << Rating(5) << endl;
    cout << Rating(3) << endl;
    cout << Rating(10, '-') << endl;

    return 0;
}