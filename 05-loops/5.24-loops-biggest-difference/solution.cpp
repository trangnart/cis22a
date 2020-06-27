#include <iostream>
// add cstdlib
#include <cstdlib>
using namespace std;

int main() {
  int count, currNum, prevNum=0, maxDiff=0;

  cin >> count;

  for (int i = 0; i < count; ++i) {
     
    cin >> currNum;
    
    if (i != 0) {
      int diff = abs(currNum - prevNum);
      if (diff > maxDiff) {
        maxDiff = diff;
      }
    }
    prevNum = currNum;
  }
  
  cout << maxDiff << endl;

  return 0;
}