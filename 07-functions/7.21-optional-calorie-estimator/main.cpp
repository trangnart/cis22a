#include <iostream>
using namespace std;

// Write your function here

int main() {
   int userMinutes;
   string userActivity; 
   
   cin >> userActivity;
   cin >> userMinutes;
   
   cout << ActivityCalories(userActivity, userMinutes) << endl;
   
   return 0;
}