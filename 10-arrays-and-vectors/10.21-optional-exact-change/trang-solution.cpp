#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string GetChange(const vector<int>&);
void ExactChange(int, vector<int>&);

int main() {
    vector<int> coinVals(5);
    int total_change;

    cin >> total_change;

    if (total_change <= 0) {
        cout << "No change\n";
        return 1;
    }

    // implement this function below
    ExactChange(total_change, coinVals);

    cout << GetChange(coinVals);

    return 0;
}

void ExactChange(int total_change, vector<int>& coinVals) {
    const vector<int> DENO = {100, 25, 10, 5};
    for (size_t i = 0; i < DENO.size(); ++i) {
        coinVals[i] = total_change / DENO[i];
        total_change = total_change % DENO[i];
    }
    coinVals[coinVals.size() - 1] = total_change;
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