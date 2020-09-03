# 10.34 LAB: Output values below an amount - functions
![Ignore] [![lab.10.28]][10.28]

Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Then, get the last value from the input, and output all integers less than or equal to that value.

Ex: If the input is:

```
5 50 60 140 200 75 100
```
the output is:

```
50 60 75
```
The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. The 100 indicates that the program should output all integers less than or equal to 100, so the program outputs 50, 60, and 75. For coding simplicity, follow every output value by a space, including the last one.

Such functionality is common on sites like Amazon, where a user can filter results.

Write your code to define and use two functions:
`vector<int> GetUserValues(vector<int>& userValues, int numValues)`
`void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold)`

Utilizing functions helps to make main() very clean and intuitive.

> Note: This is a lab from a previous chapter that now requires the use of functions.

[Ignore]: https://flat.badgen.net/badge/icon/Ignore/red?icon=terminal&label
[Lab.10.28]: https://flat.badgen.net/badge/Duplicate/10.28/red
[10.28]: ../../10-arrays-and-vectors/10.28-optional-output-values-below-an-amount
