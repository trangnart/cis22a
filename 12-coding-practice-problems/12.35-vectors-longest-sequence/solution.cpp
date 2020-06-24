#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   int numItems;
   vector<string> listItems;
   string currItem;
   int i;
   int currSeqLength, longestSeqLength;

   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }

   // Find longest sequence of complete passes
   longestSeqLength = 0;
   currSeqLength = 0;
   for (i = 0; i < numItems; ++i) {
      if (listItems.at(i) == "I") { // Either reached end of sequence, or no sequence yet
         currSeqLength = 0; // Reset for the next sequence
      }
      else { // Either starting a sequence, or in the middle of a sequence
         currSeqLength += 1;
         if (currSeqLength > longestSeqLength) { // If current sequence is longest seen so far, update longest
            longestSeqLength = currSeqLength;
         }
      }
   }

   cout << longestSeqLength << endl;

   return 0;
}

/* NOTES

* A common error is to fail to initialize both longestSeqLength and currSeqLength before the loop.

* Note that if an "I" is seen, only the currSeqLength is re-initialized to 0. Re-initializing longestSeqLength
  would be wrong.

* Other if-else logic is possible, but the above is fairly clean. Another approach might be to only
  check curr vs. longest upon reaching a sequence's end, but that introduces complexity (especially since
  the end might be due to an I or due to reaching the last item in the list). The above approach is
  slightly less efficient because the curr vs. longest check is done for every item while in a sequence,
  but simple and readable code is the first priority. Efficiency usually only need be considered when it is
  a problem (like on very large data sets).

* Enumerating the possible situations within a loop, and handling each separately, is a common pattern. Here,
  it doesn't really matter if a sequence is just beginning or if we're in the middle of a sequence; each
  case was handled the same (by incrementing the curr variable, and then possibly updating the longest variable).

*/