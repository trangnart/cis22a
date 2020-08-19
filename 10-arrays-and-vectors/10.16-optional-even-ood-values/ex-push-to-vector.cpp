#include <iostream>
#include <vector>

using namespace std;

int PushNumbers(vector<int>& myVec);
void PrintVector(const vector<int>& myVec);

int main()
{
    vector<int> numArr;

    int count = PushNumbers(numArr);
    cout << "Got " << count << " entries\n";
    PrintVector(numArr);

    return 0;
}

// '&' means we're changing the vector elements
int PushNumbers(vector<int>& myVec) {
    int total, n;
    cin >> total;                   // get how many elements to loop through
    for (int i=0; i<total; ++i) {
        cin >> n;                   // get the number
        myVec.push_back(n);         // push to back of vector
    }
    return total;                   // how many did we get?
}

// const means, don't change my vector
void PrintVector(const vector<int>& myVec) {
    for (auto v : myVec) {
        cout << v << " ";
    }
    cout << endl;
}
