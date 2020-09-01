# 10.17 LAB: Two smallest numbers
Write a program that reads a list of integers,
and outputs the two smallest integers in the list,
in ascending order.
The input begins with an integer indicating the number of integers that follow.

## Input/Output
Input | Output
--- | ---
`5 10 5 3 21 2` | `2 3`

## Hints
* You can assume that the list of integers will have at least 2 values.
* Refer to [7.31] for easier way to find max/min
* Remember to erase the smallest one you've found after you've saved it's value
to a variable

## Prototype
```cpp
void PopulateVector(vector<int>& numbers);
```
Create this function so that you can reuse this function whenever you need
to read in data from the keyboard that starts with a number of elements.

[7.31]: ../../07-functions/7.31-max-and-min-numbers/README.md