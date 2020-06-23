#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// MY PREDICTION: this will be on the final
// convert decimal to binary by division and remainder

vector<int> decimalToBinary(int decimal);

int main()
{
    vector<int> binary;
    int decimal;

    cin >> decimal;
    binary = decimalToBinary(decimal);

    for (unsigned i = 0; i < binary.size(); ++i)
    {
        cout << binary.at(i) << " ";
    }
    cout << endl;

    return 0;
}

vector<int> decimalToBinary(int decimal)
{
    vector<int> binary;
    do
    {
        binary.push_back(decimal % 2);
        decimal /= 2;
    } while (decimal > 0);

    reverse(binary.begin(), binary.end());
    return binary;
}