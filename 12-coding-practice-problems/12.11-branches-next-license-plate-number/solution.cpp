#include <iostream>
#include <string>
using namespace std;

int main() {
   string plateNumber, nextPlateNumber;
   char   c1, c2, c3; // The three letters
   char   i1, i2, i3; // The three digits
   bool   carryNeeded;

   cin >> plateNumber;

   c1 = plateNumber.at(0);
   c2 = plateNumber.at(1);
   c3 = plateNumber.at(2);
   i1 = plateNumber.at(3);
   i2 = plateNumber.at(4);
   i3 = plateNumber.at(5);

   // Check each place starting from the right. If less than max, just increment it.
   // If at max, set to start val, set carry true

   // Place 6
   if (i3 < '9') {
      i3 += 1;
      carryNeeded = false;

   }
   else {
      i3 = '0';
      carryNeeded = true;
   }

   // Place 5
   if (carryNeeded) {
      if (i2 < '9') {
         i2 += 1;
         carryNeeded = false;
      }
      else {
         i2 = '0';
         carryNeeded = true;
      }
   }

   // Place 4
   if (carryNeeded) {
      if (i1 < '9') {
         i1 += 1;
         carryNeeded = false;
      }
      else {
         i1 = '0';
         carryNeeded = true;
      }
   }

   // Place 3
   if (carryNeeded) {
      if (c3 < 'Z') {
         c3 += 1;
         carryNeeded = false;
      }
      else {
         c3 = 'A';
         carryNeeded = true;
      }
   }

   // Place 2
   if (carryNeeded) {
      if (c2 < 'Z') {
         c2 += 1;
         carryNeeded = false;
      }
      else {
         c2 = 'A';
         carryNeeded = true;
      }
   }

   // Place 1
   if (carryNeeded) {
      if (c1 < 'Z') {
         c1 += 1;
         carryNeeded = false;
      }
      else {
         c1 = 'A';
         carryNeeded = true;
      }
   }

   cout << c1 << c2 << c3 << i1 << i2 << i3 << endl;

   return 0;
}

/* NOTES

* Hard problems can often be solved just by handling one item at a time. Here, we handled one place at a time.
A more elegant solution is certainly possible, involving perhaps a function for each place, or even better using
a loop. But here, there are only 6 places, so a "brute force" solution is reasonable, at least for the first
version of a program. One can later rewrite it to be more elegant.

* You almost certainly copy-pasted. When doing so, GREAT CARE must be taken to fully modify the pasted code as needed.
Copy-paste is useful, but is also a common source of errors, so programmers should be extremely cautious after pasting
code, meticulously modifying the code, and then double-checking the code to ensure all needed changes were made.

* A common error is to forget to assign carryNeeded with false if an increment is done.

* Some beginning programmers might try to create a nested if-else structure, but such nesting is really not necessary.
The multiple if-else statements, in conjunction with the boolean for carries, works well.

*/