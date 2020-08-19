#include <iostream>
#include <vector>

using namespace std;

int GetNumbers(vector<int>& myVec);
void PrintVector(const vector<int>& myVec);

int main()
{
    vector<int> numArr;

    int count = GetNumbers(numArr);
    cout << "Got " << count << " entries\n";
    PrintVector(numArr);

    return 0;
}

// '&' means we're changing the vector elements
int GetNumbers(vector<int>& myVec) {
    int total;
    cin >> total;
    myVec.resize(total);            // make it the size of the input
    for (int i=0; i<total; ++i) {
        cin >> myVec.at(i);         // add to vector
    }
    return total;                   // how many did we get?
}

// const means, don't change my vector
void PrintVector(const vector<int>& myVec) {
    for (size_t i=0; i < myVec.size(); ++i) {
        cout << myVec.at(i) << " ";
    }
    cout << endl;
}