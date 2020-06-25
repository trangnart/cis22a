#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> listNums;
   unsigned int currNum;
   int i;
   int tmp;
   unsigned int listSize;

   while (cin >> currNum) {
      listNums.push_back(currNum);
   }

   // Reverse listNums in place.
   // Ex (even size): 0 1 2 3 becomes 3 2 1 0. Size 4, iterate from 0 to 1 (so i < (4 / 2) or 2).
   // Ex (odd size):  0 1 2 3 4 becomes 4 3 2 1 0. Size 5, iterate from 0 to 1 (so i < (4 / 2) or 2. Middle element stays.
   listSize = listNums.size();
   for (i = 0; i < (listSize / 2); ++i) {
      // Swap item from first half with item from second half
      tmp = listNums.at(i);
      listNums.at(i) = listNums.at(listSize - i - 1);
      listNums.at(listSize - i - 1) = tmp;
   }

   for (i = 0; i < listSize; ++i) {
      cout << listNums.at(i) << " ";
   }
   cout << endl;

   return 0;
}

/* NOTES

* A common mistake is to iterate from i = 0 to i < listSize. That will reverse the list twice.

* Another common mistake is to swap with listNums.at(listSize - i). That will access an invalid element.
Ex: If list size is 4, the last element is 3, but the above will initially access element 4 - 0 = 4. Hence the - 1.

* Knowing how to swap two variables or two vector elements is a very important skill.

*/