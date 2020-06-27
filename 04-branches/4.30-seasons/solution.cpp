#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
   
   if ((inputMonth == "March" && inputDay >= 20 && inputDay <= 31 ) 
   || (inputMonth == "April" && inputDay >= 1 && inputDay <= 30) 
   || (inputMonth == "May" && inputDay >= 1 && inputDay <= 31) 
   || (inputMonth == "June" && inputDay >= 1 && inputDay <= 20))
    cout << "Spring" << endl;

   else if ((inputMonth == "June" && inputDay >= 21 && inputDay <= 30) 
   || (inputMonth == "July" && inputDay >= 1 && inputDay <= 31) 
   || (inputMonth == "August" && inputDay >= 1 && inputDay <= 31) 
   || (inputMonth == "September" && inputDay >= 1 && inputDay <= 21))
    cout << "Summer" << endl;

    else if ((inputMonth == "September" && inputDay >= 22 && inputDay <= 30) 
    || (inputMonth == "October" && inputDay >= 1 && inputDay <= 31) 
    || (inputMonth == "November" && inputDay >= 1 && inputDay <= 30) 
    || (inputMonth == "December" && inputDay >= 1 && inputDay <= 20))
      cout << "Autumn" << endl;

    else if ((inputMonth == "December" && inputDay >= 21 && inputDay <= 31)
    || (inputMonth == "January" && inputDay >= 1 && inputDay <= 31) 
    || (inputMonth == "February" && inputDay >= 1 && inputDay <= 29) 
    || (inputMonth == "March" && inputDay >= 1 && inputDay <= 19))
      cout << "Winter" << endl;
   
    else 
      cout << "Invalid" << endl;

   return 0;
}