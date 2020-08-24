#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;

// An overly complicated example

string decimalToBinary(int);

int main()
{
    int decimal;

    cin >> decimal;
    cout << decimalToBinary(decimal) << endl;

    return 0;
}

string decimalToBinary(int decimal)
{
    ostringstream oss;
    vector<int> binary;
    do
    {
        binary.push_back(decimal % 2);
        decimal /= 2;
    } while (decimal > 0);

    reverse(binary.begin(), binary.end());

    // turn vector<int> to string
    copy(binary.begin(), binary.end(), ostream_iterator<int>(oss, ""));

    return oss.str();
}