#include <iostream>
#include <vector>
using namespace std;

void PopulateVector(vector<int>& numbers);

int main() {
   vector<int> numbers;
   string range;
   int min, max;

   PopulateVector(numbers);
   cin >> min >> max;

   for (auto& e : numbers){
      if (e >= min && e <= max) {
         cout << e << " ";
      }
   }
   cout << endl;

   return 0;
}

void PopulateVector(vector<int>& numbers) {
   int size;
   cin >> size;

   numbers.resize(size);
   for (auto& e : numbers) {
      cin >> e;
   }
}