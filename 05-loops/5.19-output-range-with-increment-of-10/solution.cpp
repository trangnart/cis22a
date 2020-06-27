#include <iostream>
using namespace std;

int main() {
  int from, to;

  cin >> from >> to;
  
  if (to < from) {
    cout << "Second integer can't be less than the first.";
  } 
  else {
    for(int i = from; i <= to; i += 10) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
