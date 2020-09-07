# 12.32 PRACTICE: Vectors**: Min, max, average
![Difficult]

Given 10 input integers, output the minimum, maximum,
and average of those integers.

## Input/Output
Input | Output
--- | ---
`1 1 1 1 1 3 3 3 3 3` | `1 3 2`
`9 8 7 6 5 4 3 2 1 0` | `0 9 4.5`

## Hints
* Use a single for loop and update variables `minVal`, `maxVal`, and `sumVals` on each iteration. (You could use three loops instead).
* Initialize variables `minVal` and `maxVal` each to the first integer, NOT to `0`.
`0` is wrong, because integers could be negative.
Then update those values if a smaller or larger integer is seen (respectively).
* Don't forget to use floating-point division, not integer division, when computing the average (use `/ 10.0`, not `/ 10`).

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow