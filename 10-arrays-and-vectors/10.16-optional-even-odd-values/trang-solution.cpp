#include <iostream>
#include <vector>
using namespace std;

bool IsVectorEven(vector<int> myVec);
bool IsVectorOdd(vector<int> myVec);

int main()
{
    int num;
    vector<int> myVec;

    cin >> num;
    myVec.resize(num);
    
    for (auto& i : myVec) {
        cin >> i;
    }
    if (IsVectorEven(myVec) == true) {
        cout << "all even" << endl;
    }
    else if (IsVectorOdd(myVec) == true) {
        cout << "all odd" << endl;
    }
    else {
        cout << "not even or odd" << endl;
    }

    return 0;
}

bool IsVectorEven(vector<int> myVec) {
    for (auto i : myVec) {
        if (i % 2 != 0) {
            return false;
        }
    }
    return true;
}

bool IsVectorOdd(vector<int> myVec) {
    for (auto i : myVec) {
        if (i % 2 == 0) {
            return false;
        }
    }
    return true;
}
