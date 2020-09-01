#include <iostream>

using namespace std;

void selectionSort(int array[], int size);
void dumpOut(int i, int array[], int size);

int main()
{
    int list[100] = {50, 30, 80, 10, 30, 40, 90, 30, 80, 30};
    int size = 10;

    selectionSort(list, size);

    return 0;
}

void selectionSort(int array[], int size)
{
    int minIndex;
    for (int i = 0; i < size; i++)
    {
        // look for smallest
        int minIndex = i;
        for(int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        // swap with current index pointed to by i
        int hold = array[minIndex];
        array[minIndex] = array[i];
        array[i] = hold;

        dumpOut(i, array, size);
    }
}

void dumpOut(int index, int array[], int size) {
    cout << index << ": ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}