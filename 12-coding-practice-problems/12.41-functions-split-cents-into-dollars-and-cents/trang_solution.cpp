#include <iostream>
using namespace std;

void CentsToDollarsCents(const int& dc, int& dollar, int& cent) {
    dollar = dc / 100;
    cent = dc % 100;
}

int main() {
    int dc, dollar, cent;
    cin >> dc;
    
    CentsToDollarsCents(dc, dollar, cent);

    cout << dollar << " " << cent << endl;

    return 0;
}