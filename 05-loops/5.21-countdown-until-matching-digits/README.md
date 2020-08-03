# 5.21 LAB: Countdown until matching digits
Write a program that takes in an integer in the range `20` to `98` as input.
The output is a countdown starting from the integer,
and stopping when both output digits are identical.

## Examples
Input | Output
--- | ---
`93` | `93 92 91 90 89 88`
`77` | `77`
`15` | `Input must be 20-98`
`97` | `Input must be 20-98`

If input is any value not between `20` and `98` (inclusive), the output is:
```
Input must be 20-98
```

## Notes
For coding simplicity, follow each output number by a space, even the last one.

* Use a while loop.
* Compare the digits;
* do not write a large if-else for all possible same-digit
numbers (`11`, `22`, `33`, …, `88`), as that approach would be
cumbersome for larger ranges.