#include <iostream>
using namespace std;

bool insertSorted(int list[], int& length, int newData);
bool insertSorted2(int list[], int& length, int newData);

int main() {
    int list[100] = {20, 30, 40, 50, 60};
    int length = 5;
    int newData = 25;
    bool done;
   
    done = insertSorted(list, length, newData); // insert 25
             // now list has 6 elements: 20, 25, 30, 40, 50, 60

    done = insertSorted(list, length, 10);      // insert 10
             // now list has 7 elements: 10, 20, 25, 30, 40, 50, 60

    done = insertSorted(list, length, 70);      // insert 70
             // now list has 8 elements: 10, 20, 25, 30, 40, 50, 60, 70

    return 0;
}

bool insertSorted(int list[], int& length, int newData) {
    int newList[length + 1];
    int offset = 0;

    for ( int i = 0; i < length; ++i ) {
        if ( newData < list[i] && !offset ) {
            newList[i] = newData;
            ++offset;
        }
        newList[i + offset] = list[i];
    }
    
    if ( !offset ) {
        newList[length] = newData;
    }

    for ( int i = 0; i <= length; ++i ) {
        list[i] = newList[i];
        cout << list[i] << " ";
    }
    cout << endl;
    ++length;    
    return true;
}

bool insertSorted2(int list[], int& length, int newData) {
    int temp;
    bool inserted = false;
    for ( int i = 0; i < length; ++i ) {
        if ( newData < list[i] ) {
            temp = list[i];
            list[i] = newData;
            inserted = true;
        }
        if (inserted) {
            temp = list[i];
            list[i] = list[i+1];
            list[i+1] = temp;
        }
    }

    for ( int i = 0; i <= length; ++i ) {
        cout << list[i] << " ";
    }
    cout << endl;
    ++length;    
 
    return true;
}