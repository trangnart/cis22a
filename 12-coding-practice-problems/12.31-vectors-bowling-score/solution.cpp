#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> throwValues(21);
   vector<int> frameScores(10);
   int t; // Throw index
   int f; // Frame index
   int frameScore;

   // Read in the 21 possible throw values for the 10 frames
   for (t = 0; t < 21; ++t) {
      cin >> throwValues.at(t);
   }

   // Compute score of each of first 9 frames
   t = 0;
   for (f = 0; f < 9; ++f) {
      frameScore = 0;
      frameScore = throwValues.at(t); // Add first throw of this frame
      if (frameScore == 10) { // Strike
         frameScore += throwValues.at(t + 1) + throwValues.at(t + 2); // Add next two throws
      }
      else { // Not a strike
         ++t;
         frameScore += throwValues.at(t); // Add second throw of this frame
         if (frameScore == 10) { // Spare
            frameScore += throwValues.at(t + 1); // Add next throw
         }
      }
      ++t;

      if (f > 0) { // Not first frame, so add previous frame's score
         frameScore += frameScores.at(f - 1); // Add previous frame's score
      }

      frameScores.at(f) = frameScore;
   }

   // 10th frame
   frameScores.at(f) = frameScores.at(f - 1) + throwValues.at(t) + throwValues.at(t + 1) + throwValues.at(t + 2);
   // Note: If only two throws in 10th frame, the t+2 value will be 0, so OK to add. Keeps code simpler.

   // Note that above, frame 1 is at element 0, frame 2 at element 1, ..., and frame 10 at element 9.


   for (f = 0; f < 10; ++f) {
      cout << frameScores.at(f) << " ";
   }
   cout << endl;

   return 0;
}


/* NOTES

* Considering the first 9 frames separately from the 10th frame simplifies the logic. Trying to include the 10th frame
  as a special case in a 10-frame loop may have been harder to think about.

* In the 9-frame loop, three cases must be considered. A strike (add next two throws). Else, it could be a non-spare
  (just add second throw), or could be a spare (add second throw and next throw). The if-else structures capture that.

* Care must be taken to only add the previous frame's score if a previous frame exists. Thus, the (f > 0) check.
  When using vectors, one must always make think to ensure an element exists before trying to access it.

*/