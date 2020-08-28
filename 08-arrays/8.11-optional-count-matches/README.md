# 8.11 Count Matches - functions
Write a program whose input is a target integer, the number of
elements in an array followed by the array elements, also integers,
and whose output represents the number of times the target integer
appears in the array.

## Input/Output
Input | Output
--- | ---
`80 6 20 90 80 30 80 50` | `2`
`25 6 20 90 80 30 80 50` | `0`
`25 6 25 25 25 25 25 25` | `6`

* First number is the _target_
* Second number is the size of the array
* The rest are the values

## Function Prototype
```cpp
int CountMatches(int, const vector<int>&);
```

## Hints
You should start your `main()` function with something like this
to test your `CountMatches()`:
```cpp
cout << CountMatches(25, vector<int>{25, 25, 15, 3}) << endl;
```

After you've got the function working,
then figure out how to take the input from the user.