# 10.27 LAB: Middle item
Given a sorted list of integers, output the middle integer.
Assume the number of integers is always odd.

## Input
```
2 3 4 8 11 -1
```
A negative indicates the end.

## Output
```
4
```
The maximum number of inputs for any test case should not exceed 9.
If exceeded, output `Too many inputs`.

## Prototype
```cpp
void PopulateVector(vector<int>& numbers);
```
This function reads in the input until `-1`.
Save this for future usage.

## Hint
First read the data into a vector.
Then, based on the number of items, find the middle item.