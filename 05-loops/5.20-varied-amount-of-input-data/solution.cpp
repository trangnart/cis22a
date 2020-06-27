#include <iostream>
using namespace std;

int main() {
  int userNum,
      avg,
      max = 0,
      count = 0,
      sum = 0;

  cin >> userNum;

  while (userNum >= 0) {
    if (userNum > max) {
      max = userNum;
    }
    count++;
    sum += userNum;
    cin >> userNum;
  }
  avg = sum / count;

  cout << avg << " " << max << endl;

  return 0;
}