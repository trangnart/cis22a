# 12.33 PRACTICE: Vectors**: Mode
The "mode" is a statistical summary of data (as are min, max, and average) representing the most commonly-occurring value. Given 10 integers ranging from 0 to 99, output the mode and its frequency. If the input is 1 1 1 1 2 2 9 8 7 6, the output is:

```
1 4
```
If any integer is outside 0-99, output an error. If an input is 105, the output is:

```
Invalid input: 105 is not in 0-99
```
Hints:
* Knowing that integers are in 0-99 enables creating a vector with 100 elements to count the occurrences of each value.
* Traverse the userValues vector and keep count by incrementing the appropriate element in a counts vector. If the input is 27, then increment element 27's value.
* While traversing userValues, check for an integer outside the range. If found, print the error message, and immediately return.
* After done counting, use another loop to traverse the counts vector and find the max. Also keep track of the index where max was found.