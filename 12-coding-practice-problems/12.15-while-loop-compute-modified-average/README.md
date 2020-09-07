# 12.15 PRACTICE: Loops (while)**: Compute modified average
![Difficult]

Compute the average of a list of user-entered integers representing rolls of two dice.
The list ends when `0` is entered.
Integers must be in the range `2` to `12` (inclusive);
integers outside the range don't contribute to the average.
Output the average, and the number of valid and invalid integers
(excluding the ending `0`).
If only `0` is entered, output `0`.
The output may be a floating-point value.

## Input
```
8 12 13 0
```

## Output
```
Average: 10
Valid: 2
Invalid: 1
```

## Hints
* Use a while `loop` with expression `(userInt != 0)`
* Read the user's input into userInt before the loop,
and also at the end of the loop body
* In the loop body, use an `if-else` to distinguish integers in the range and integers outside the range
* For integers in the range, keep track of the sum, and number of integers.
For integers outside the range, just keep track of the number.
* Use a `static cast` to get a floating-point output: `(static_cast (sum)) / num`
* Whenever dividing, be sure to handle the case of the denominator being `0`.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow