#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

void PopulateVector(vector<int>&);
string Vector2String(const vector<int>&, const char* = " ");

int main() {
    vector<int> numbers;
    stringstream oss;

    PopulateVector(numbers);

    sort(numbers.begin(), numbers.end());

    cout << Vector2String(numbers) << endl;

    return 0;
}

void PopulateVector(vector<int>& numbers) {
    size_t total;
    cin >> total;
    numbers.resize(total);

    for (size_t i=0; i < total; ++i) {
        cin >> numbers[i];
    }
}

string Vector2String(const vector<int>& vec, const char* delim) {
    stringstream oss;
    copy(vec.begin(), vec.end(), ostream_iterator<int>(oss, delim));
    return oss.str();
}