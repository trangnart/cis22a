#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> listNums;
    unsigned int currNum;
    int i;
    int tmp;
    unsigned int listSize;

    cout << "Size of list: ";
    cin >> listSize;
    while (listSize-- && cin >> currNum)
    {
        listNums.push_back(currNum);
    }
    listSize = listNums.size();

    // Reverse listNums in place.
    /* Type your code here. */

    for (i = 0; i < listSize; ++i)
    {
        cout << listNums.at(i) << " ";
    }
    cout << endl;

    return 0;
}