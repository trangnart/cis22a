#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;

   cin >> inputMonth;
   cin >> inputDay;

   if ((inputMonth == "March" && inputDay > 19 && inputDay < 32) ||
      (inputMonth == "April" && inputDay > 0 && inputDay < 31) ||
      (inputMonth == "May" && inputDay > 0 && inputDay < 32) ||
      (inputMonth == "June" && inputDay > 0 && inputDay < 21)) {
         cout << "Spring" << endl;
   }

   else if ((inputMonth == "June" && inputDay > 20 && inputDay < 31) ||
      (inputMonth == "July" && inputDay > 0 && inputDay < 32) ||
      (inputMonth == "August" && inputDay > 0 && inputDay < 32) ||
      (inputMonth == "September" && inputDay > 0 && inputDay < 22)) {
         cout << "Summer"<< endl;
   }

   else if ((inputMonth == "September" && inputDay > 21 && inputDay < 31) ||
      (inputMonth == "October" && inputDay > 0 && inputDay < 32) ||
      (inputMonth == "November" && inputDay > 0 && inputDay < 31) ||
      (inputMonth == "December" && inputDay > 0 && inputDay < 21)) {
         cout << "Autumn"<< endl;
   }

   else if ((inputMonth == "December" && inputDay > 20 && inputDay < 32) ||
      (inputMonth == "January" && inputDay > 0 && inputDay < 32) ||
      (inputMonth == "February" && inputDay > 0 && inputDay < 29) ||
      (inputMonth == "March" && inputDay > 0 && inputDay < 20)) {
         cout << "Winter"<< endl;
   }
   
   else {
      cout << "Invalid" << endl;
   }

   return 0;
}