#include <iostream>
using namespace std;

int LargestNumber(int num1, int num2, int num3) {
  int maxNum = num1;
  if (maxNum < num2) {
    maxNum = num2;
  }
  if (maxNum < num3) {
    maxNum = num3;
  }
  return maxNum;
}

int SmallestNumber(int num1, int num2, int num3) {
  int minNum = num1;
  if (minNum > num2) {
    minNum = num2;
  }
  if (minNum > num3) {
    minNum = num3;
  }
  return minNum;
}

int main() {
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  cout << "largest: " << LargestNumber(num1,num2,num3) << endl;
  cout << "smallest: " << SmallestNumber(num1,num2,num3) << endl;
  
  return 0;
}