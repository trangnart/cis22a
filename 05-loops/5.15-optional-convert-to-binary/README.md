# 5.15 LAB: Convert to binary
Write a program that takes in a positive integer as input,
and outputs a string of `1`'s and `0`'s representing the integer in binary.
For an integer `x`, the algorithm is:
```
As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
```
Note: The above algorithm outputs the 0's and 1's in reverse order.

Ex: If the input is:
```
6
```

the output is:
```
011
```

`6` in binary is `110`; the algorithm outputs the bits in reverse.

## Hints
* Use a `while` loop to check if `x` > 0
* Append modulo output to a `string` (use `to_string` to convert `int` to `string`)