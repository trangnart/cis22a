#include <iostream>
using namespace std;

int main() {
  long long phoneNumber;
  int first3;
  int next3;
  int last4;

  cin >> phoneNumber;
  
  first3 = phoneNumber / 10000000;
  next3 = phoneNumber / 10000LL % 1000; 
  last4 = phoneNumber % 10000LL;
  
  cout << "(" << first3 << ")"; 
  cout << " " << next3;
  cout << "-" << last4 << endl;
  
   return 0;
}
