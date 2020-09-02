#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string GetChange(const vector<int>&);
void ExactChange(int, vector<int>&);

int main() {
    vector<int> coinVals(5);
    int pennies;

    cin >> pennies;

    if (pennies <= 0) {
        cout << "No change\n";
        return 1;
    }

    // implement this function below
    ExactChange(pennies, coinVals);

    cout << GetChange(coinVals);

    return 0;
}

void ExactChange(int pennies, vector<int>& coinVals) {
    // implement this
}

string GetChange(const vector<int>& coins) {
    const vector<string> DENOMINATION {
        "dollar", "quarter", "dime", "nickel", "penny",
        "dollars", "quaters", "dimes", "nickels", "pennies"
    };

    stringstream ss;
    for (size_t i = 0; i < coins.size(); ++i) {
        int count = coins[i];
        if (count) {
            int index = count > 1 ? i + 5 : i;
            ss << count << " "
                 << DENOMINATION[index]
                 << endl;
        }
    }
    return ss.str();
}