#include <iostream>
#include <vector>
using namespace std;

int CountMatches(int target, const vector<int>& vec);

int main() {
    vector<int> vec;
    int target, size, list;

    cin >> target;
    cin >> size;

    for (int i = 0; i < size; i++)
	{
		cin >> list;
		vec.push_back(list);
    }

    cout << CountMatches(target, vec) << endl;

    return 0;
}

int CountMatches(int target, const vector<int>& vec) {
    int count;
    
    for (size_t i = 0; i < vec.size(); ++i) {
        if (target == vec[i]) {
            count++;
        }
    }
    return count;
}
