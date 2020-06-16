#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
void ReadList(int list[], int &length);
   /* Type your code here. */

int main(int argc, char* argv[])
{
    int list[MAX_SIZE];
    int length;    // actual size of list
    int target, count;

    cin >> target;
    ReadList(list, length);
    count = CountMatches(list, length, target);
    cout << count << endl;

    return 0;
}
   /* Type your code here. */


void ReadList(int list[], int &length)
{
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> list[i];
    }
}