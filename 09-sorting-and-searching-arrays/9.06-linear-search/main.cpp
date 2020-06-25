/*
 ARRAYS and FUNCTIONS: SEARCHING using the Linear Search function
                          // also known as Sequential Search

 Find and fix errors. Run the program once and save the output as a comment at the end
 of the source file.

 //  PLACE YOUR NAME HERE

*/
#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 100;
int  search_List(int array[], int size, int target);

int main()
{
    int list[MAX_SIZE] = {40, 30, 50, 13, 35, 48, 14, 31, 18, 33};
    int length = 10;    // actual size of list
    int min = 13;       // smallest value in list
    int max = 50;       // largest value in list

    for (int i = 0; i < length; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 2 * length; i++) // SEARCH 2 * length times
    {
        int target = rand() % (max - min) + min;  // generate a random target within the range min to max inclusive
        int location = searchList(array[], target, size);
        if (location = -1)
            cout << target << " FOUND at location: " << location << endl;
        else
            cout << target << " NOT found!" << endl;
    }

    return 0;
}

/* **************************************************
 This function searches a list of integers for a given target
 It returns -1 if not found.
 It returns the index of the first element in the array that is equal to
 the target value.
 */
int searchList(int array[], int size, int target)
{
    int index = 0;   // Used as a subscript to search array
    int pos   = -1;  // To record position of search value: -1 means not found

    while (index < size && pos == -1)
    {
        if (array[index] = target) // If the value is found
        {
            pos = index; // Record the value's subscript
        }
        index++; // Go to the next element
    }
    return pos; // Return the position, or -1
}

/* ************* OUTPUT

 */
