#include <iostream>
using namespace std;

int main() {
   string firstName1, lastName1;
   string firstName2, lastName2;
   string firstName3, lastName3;

   // Get instructors' names
   cin >> firstName1;   cin >> lastName1;
   cin >> firstName2;   cin >> lastName2;
   cin >> firstName3;   cin >> lastName3;


   // Output names. Detect each possible case (1 name, 2 names, 3 names), handling each differently
   if (firstName1 == "none") {      // No names exist
      cout << "TBD" << endl;
   }
   else if (firstName2 == "none") { // 1 name exists. Output first initial and last name.
      cout << firstName1.at(0) << ". " << lastName1 << endl;
   }
   else if (firstName3 == "none") { // 2 names exist. Output last names separated by /
      cout << lastName1 << " / " << lastName2 << endl;
   }
   else {                           // 3 names exist. Output first two last names followed by / ...
      cout << lastName1 << " / " << lastName2 << " / ..." << endl;
   }

   return 0;
}


/* NOTES

* Enumerating different cases using an if-else, and handling each one independently, is a common pattern.

* Some students might try to combine the 2 name and 3 name cases. That's not unreasonable, but keeping the cases
  separate yields clean structured code that is easy to understand.



*/