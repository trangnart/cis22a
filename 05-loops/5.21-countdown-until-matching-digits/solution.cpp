#include <iostream>
using namespace std;

int main() {
  int userNum, firstNum, secondNum;

  cin >> userNum;

  if (userNum < 20 || userNum > 98) {
    cout << "Input must be 20-98\n";
  }
  else {
    do {
      firstNum = userNum / 10;
      secondNum = userNum % 10;
      cout << userNum << " ";
      userNum--;
    } while (firstNum != secondNum);
    
    cout << endl;
  }
  return 0;
}