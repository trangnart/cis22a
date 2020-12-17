#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
   string idToFind; // Using string for id in case  has both numbers and letters, like M47
   string dbId;
   string dbFirstName;
   string dbLastName;
   ifstream customerDb;

   cin >> idToFind;

   // You need not understand the file open and close functions to complete this program. Just know that
   // customerDb can be read just like cin can be read. cin >> x   CustomerDb >> x.

   customerDb.open("CustomerDb.txt");
   if (customerDb.fail()) {
      cout << "Could not open CustomerDb.txt" << endl;
   }
   else { // File successfully opened

      // When reaching end of file, (customerDb >> dbId) will evaluate to 0
      while ((customerDb >> dbId) && (dbId != idToFind)) {
         // Skip first and last names
         customerDb >> dbFirstName;
         customerDb >> dbLastName;
      }

      if (dbId == idToFind) {
         // Get first and last names
         customerDb >> dbFirstName;
         customerDb >> dbLastName;
         cout << dbFirstName << " " << dbLastName << endl;
      }
      else {
         cout << "Not found" << endl;
      }

      customerDb.close();
   }

   return 0;
}

/* NOTES

* Updating an existing code pattern, like a loop that reads text file entries, is a common programmer task.

* Skipping items in a file while searching for a specific item is common

*/