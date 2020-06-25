# 12.21 PRACTICE: Loops*: Output integers as comma-separated list
Given a list of integers, output those integers separated by a comma and space, except for the last which should be followed by a period (and newline). The first integers indicates how many integers are in the subsequent list. If the input is 4 1 7 3 5, the output should be: 1, 7, 3, 5.

Hints:
* Read in the first integer as numInts, followed by a for loop that loops numInts times.
* Decide whether to print the comma and space AFTER printing the current integer, or BEFORE. For each possibility, figure out how you'll handle the special cases of the first and last items, and then decide whether after or before is the best approach.
* You can print the period and newline after the above for loop.