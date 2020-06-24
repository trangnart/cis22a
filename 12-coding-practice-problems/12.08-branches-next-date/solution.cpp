#include <iostream>
using namespace std;

int main() {
   int userMonth;
   int userDay;
   int userYear;
   int nextMonth;
   int nextDay;
   int nextYear;

   cin >> userMonth;
   cin >> userDay;
   cin >> userYear;

   // Days per month
   // Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
   //  1   2   3   4   5   6   7   8   9   10  11  12
   //  31  28  31  30  31  30  31  31  30  31  30  31

   if ((userMonth == 12) && (userDay == 31)) { // Last day of year
      nextMonth = 1;
      nextDay   = 1;
      nextYear  = userYear + 1;
   }
   else if (  ( (userMonth == 1) || (userMonth == 3) || (userMonth == 5)
               || (userMonth == 7) || (userMonth == 8) || (userMonth == 10) )
            && (userDay == 31) ) {
      nextMonth = userMonth + 1;
      nextDay   = 1;
      nextYear  = userYear;
   }
   else if (  ( (userMonth == 4) || (userMonth == 6) || (userMonth == 9) || (userMonth == 11) )
            && (userDay == 30) ) {
      nextMonth = userMonth + 1;
      nextDay   = 1;
      nextYear  = userYear;
   }
   else if ( (userMonth == 2) && (userDay == 28) ) {
      nextMonth = userMonth + 1;
      nextDay = 1;
      nextYear = userYear;
   }
   else { // Normal case, just increment day
      nextMonth = userMonth;
      nextDay = userDay + 1;
      nextYear = userYear;
   }

   cout << nextMonth << " " << nextDay << " " << nextYear << endl;

   return 0;
}