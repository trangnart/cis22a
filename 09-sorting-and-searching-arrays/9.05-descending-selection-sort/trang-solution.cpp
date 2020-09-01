#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> list, int size);
void dumpOut(int i, vector<int> list, int size);

int main()
{
    vector<int> list = {50, 30, 80, 10, 30, 40, 90, 30, 80, 30};
    int size = 10;

    selectionSort(list, size);

    return 0;
}

void selectionSort(vector<int> list, int size)
{
    int minIndex;
    for (int i = 0; i < size; i++)
    {
        // look for smallest
        int minIndex = i;
        for(int j = i + 1; j < size; j++)
        {
            if (list[j] < list[minIndex]) {
                minIndex = j;
            }
        }
        // swap with current index pointed to by i
        int hold = list[minIndex];
        list[minIndex] = list[i];
        list[i] = hold;

        dumpOut(i, list, size);
    }
}

void dumpOut(int index, vector<int> list, int size) {
    cout << index << ": ";
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}