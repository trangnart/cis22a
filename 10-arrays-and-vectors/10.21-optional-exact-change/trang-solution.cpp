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
    int Cents;
    int Dollars = pennies / 100;
    coinVals.push_back(Dollars);

    Cents = pennies % 100;
    int Quarters = Cents / 25;
    coinVals.push_back(Quarters);

    Cents = Cents % 25;
    int Dimes = Cents / 10;
    coinVals.push_back(Dimes);

    Cents = Cents % 10;
    int Nickels = Cents / 5;
    coinVals.push_back(Nickels);

    Cents = Cents % 5;
    int Pennies = Cents / 1;
    coinVals.push_back(Pennies);
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