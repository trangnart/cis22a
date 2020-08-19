#include <iostream>
using namespace std;

double ActivityCalories(string activity, int min);
void CalculateCaloriesUserInput();
void CalculateCaloriesFromFile(const string &filename);

int main() {
   // Call this function to test your ActivityCalories()
   CalculateCaloriesUserInput();

   // after you have finished implement the above, comment it out
   // and call the second function
   // remember to declare a constant for the filename
   // and then call the function with the file
   // CalculateCaloriesFromFile(FILENAME);

   return 0;
}

// step 1: Implement this function
double ActivityCalories(string activity, int min) {

}

// step 2: Implement this for user input
void CalculateCaloriesUserInput() {
   int userMinutes;
   string userActivity;

   cin >> userActivity;
   cin >> userMinutes;

   cout << ActivityCalories(userActivity, userMinutes) << endl;
}

// step 3: Implement this function
// look at the other exercises to see how to read a file
void CalculateCaloriesFromFile(const string &filename) {

}