# 10.16 LAB: Even/odd values in a vector
Write a program that reads a list of integers,
and outputs whether the list contains all even numbers, odd numbers, or neither.
The input begins with an integer indicating the number of integers that follow.

## Input/Output
Input | Output
--- | ---
`5 2 4 6 8 10` | `all even`
`5 1 -3 5 -7 9` | `all odd`
`5 1 2 3 4 5` | `not even or odd`

Remember, the first number `5` is how many numbers in this list.

Your program must define and call the following two functions.
`IsVectorEven()` returns true if all integers in the array are `even`
and `false` otherwise.
`IsVectorOdd()` returns true if all integers in the array are `odd`
and `false` otherwise.

## Function Prototypes
```cpp
bool IsVectorEven(vector<int> myVec);
bool IsVectorOdd(vector<int> myVec);
```

## Hints
Look at [ex-input-to-vector.cpp] for the traditional way of inserting
and looping through vector.
[ex-push-to-vector.cpp] is an alternative, probably easier way of using vector.

[ex-input-to-vector.cpp]: ../../10-arrays-and-vectors/10.16-optional-even-odd-values/ex-input-to-vector.cpp
[ex-push-to-vector.cpp]: ../../10-arrays-and-vectors/10.16-optional-even-odd-values/ex-push-to-vector.cpp
