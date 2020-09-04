#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

int GetMinimumInt(const vector<int>& listInts);
void SubtractMin(int min, vector<int>& listInts);
string Vector2String(const vector<int>& vec, const char* = " ");
void PopulateVector(vector<int>& numbers);

int main() {
    vector<int> ints;
    int min;

    PopulateVector(ints);
    min = GetMinimumInt(ints);
    SubtractMin(min, ints);

    cout << Vector2String(ints);

    return 0;
}

int GetMinimumInt(const vector<int>& listInts) {
    auto min = min_element(listInts.begin(), listInts.end());
    return *min;
}

void SubtractMin(int min, vector<int>& listInts) {
    for (auto& n : listInts) {
        n -= min;
    }
}

string Vector2String(const vector<int>& vec, const char* delim) {
    stringstream oss;
    copy(vec.begin(), vec.end(), ostream_iterator<int>(oss, delim));
    return oss.str();
}

void PopulateVector(vector<int>& numbers) {
    size_t total;
    cin >> total;
    numbers.resize(total);

    for (size_t i=0; i < total; ++i) {
        cin >> numbers[i];
    }
}