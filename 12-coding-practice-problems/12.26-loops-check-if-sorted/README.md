# 12.26 PRACTICE: Loops*: Check if sorted
![Easy]

Given a list of unique numbers, write a program that outputs `Sorted` if the numbers are in ascending order, `Unsorted` otherwise.

## Input/Output
Input | Output
--- | ---
`5 1 3 6 7 9` | `Sorted`
`3 10 8 2` | `Unsorted`

A list of size 0 or 1 is sorted.

## Hints
* Remember that only one violation makes the entire list unsorted.
* For simplicity, you don't have to don't break out of the loop if you find two numbers aren't ascending.
Instead, use a `bool` variable, initialize it to `true`, and set it to `false` if you find any violation.

[Easy]: https://flat.badgen.net/badge/Easy/★☆☆☆/green