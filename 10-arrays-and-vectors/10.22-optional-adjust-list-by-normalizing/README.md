# 10.22 LAB: Adjust list by normalizing - functions
When analyzing data sets, such as data for human heights or for human weights,
a common step is to adjust the data.
This can be done by normalizing to values between `0` and `1`,
or throwing away outliers.

For this program,
adjust the values by subtracting the smallest value from all the values.
The input begins with an integer indicating the number of integers that follow.
Assume that the list will always contain less than 20 integers.

## Input
```
5 30 50 10 70 65
```

## Output
```
20 40 0 60 55
```
For coding simplicity, follow every output value by a space, even the last one.

## Prototypes
```cpp
int GetMinimumInt(vector<int> listInts);
void SubtractMin(int min, vector<int>& listInts);
```

## Hints
Remember the old friends from previous labs:
```cpp
void PopulateVector(vector<int>&);
string Vector2String(const vector<int>&, const char* = " ");
```