# 7.17 LAB: Max magnitude
Write a function `MaxMagnitude()` with two integer input parameters that
returns the largest magnitude value.
Use the function in a program that takes two integer inputs,
and outputs the largest magnitude value.

## Examples
Input | Function Returns
--- | ---
`5 7` | `7`
`-8 -2` | `-8`

## Note
The function does not just return the largest value,
which for `-8 -2` would be `-2`.
Though not necessary, you may use the absolute-value built-in math function.

## Function Prototype
Your program must define and call a function:
```cpp
int MaxMagnitude(int userVal1, int userVal2);
```

## Hint
Absolute value function is `abs()`.