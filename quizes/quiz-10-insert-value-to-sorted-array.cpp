#include <iostream>
#include <vector>
using namespace std;

bool insertSorted(int list[], int &length, int newData);
bool insertSorted2(int list[], int &length, int newData);
bool insertSorted3(int list[], int &length, int newData);
bool insertSorted_teacher(int list[], int &length, int newData);

int main()
{
    int list[100] = {20, 30, 40, 50, 60};
    int length = 5;
    int newData = 25;
    bool done;

    done = insertSorted(list, length, newData); // insert 25
                                                // now list has 6 elements: 20, 25, 30, 40, 50, 60

    done = insertSorted(list, length, 10); // insert 10
                                           // now list has 7 elements: 10, 20, 25, 30, 40, 50, 60

    done = insertSorted(list, length, 70); // insert 70
                                           // now list has 8 elements: 10, 20, 25, 30, 40, 50, 60, 70

    for (int i = 0; i < length; ++i)
    {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}

bool insertSorted_teacher(int list[], int &length, int newData)
{
    bool success = false;
    if (length < 100) // check if array is not full
    {
        success = true;
        int i = length - 1; // last element’s index
        while (i >= 0 && newData < list[i])
        {
            list[i + 1] = list[i]; // shift to the right
            i--;
        }
        list[i + 1] = newData; // copy the new value at index i + 1
        length++;              // update length
    }
    return success;
}

bool insertSorted(int list[], int &length, int newData)
{
    for (int i = length; i >= 0; --i)
    {
        if (list[i - 1] > newData)
        {
            // shift it over to the back of the list
            list[i] = list[i - 1];
        }
        else
        {
            // insert the new data and we're done
            list[i] = newData;
            break;
        }
    }

    ++length;

    return true;
}

bool insertSorted2(int list[], int &length, int newData)
{
    vector<int> temp(*list, length + 1);
    int offset = 0;

    for (int i = 0; i < length; ++i)
    {
        if (newData < list[i] && !offset)
        {
            temp.at(i) = newData;
            ++offset;
        }
        temp.at(i + offset) = list[i];
    }

    if (!offset)
    {
        temp.at(length) = newData;
    }

    for (int i = 0; i <= length; ++i)
    {
        list[i] = temp.at(i);
    }
    ++length;
    return true;
}

bool insertSorted3(int list[], int &length, int newData)
{
    int save, nextVal;
    bool inserted = false;

    for (int i = 0; i < length; ++i)
    {
        if (inserted)
        {
            save = list[i];
            list[i] = nextVal;
            nextVal = save;
        }

        if (newData < list[i] && !inserted)
        {
            nextVal = list[i];
            list[i] = newData;
            inserted = true;
        }
    }

    if (inserted)
        list[length] = nextVal;
    else
        list[length] = newData;

    ++length;

    return true;
}