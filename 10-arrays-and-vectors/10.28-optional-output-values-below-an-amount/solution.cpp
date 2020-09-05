#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>
using namespace std;

void PopulateVector(vector<int>& numbers);
string Vector2String(const vector<int>& vec, const char* = " ");

int main() {
    vector<int> list;
    int threshold;

    PopulateVector(list);
    cin >> threshold;

    // a complicated way to do this but this is a practical way
    for (auto it = list.begin(); it != list.end(); ++it) {
        if (*it > threshold) {
            list.erase(it--);
        }
    }

    cout << Vector2String(list) << endl;

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