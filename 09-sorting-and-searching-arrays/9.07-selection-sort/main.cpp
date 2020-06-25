/*
 ARRAYS and FUNCTIONS: SORTING using the SELECTION SORT function

 Find and fix errors. Run the program once and save the output as a comment at the end
 of the source file.


 //  PLACE YOUR NAME HERE

*/

#include <iostream>
#include <fstream>

using namespace std;

void selectionSort(int array[], int size);

int main()
{
    int list[100] = {50, 30, 80, 10, 30, 40, 90, 30, 80, 30};
    int size = 10;

    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;


    void selectionSort(int array[], int size);
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}

/* **************************************************
 This function sorts an array in ascending order
 using the selection sort algorithm
*/
void selectionSort(int array[], int size)
{
    for (int i = 0; i <= size + 1; i++)
    {
        // look for smallest
        int minIndex = i;
        for(int k = i + 1; k <= size; k++)
        {
            if (array[k] < array[minIndex])
                minIndex = k;
        }
        // swap

    }
        int hold = array[minIndex];
        array[minIndex] = array[i];
        array[i] = hold;
}

/* ***************** OUTPUT

*/
