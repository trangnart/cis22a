# 5.21 LAB: Countdown until matching digits
Write a program that takes in an integer in the range 20-98 as input. The output is a countdown starting from the integer, and stopping when both output digits are identical.

Ex: If the input is:
```
93
```
the output is:
```
93 92 91 90 89 88
```
Ex: If the input is:
```
77
```
the output is:
```
77
```
Ex: If the input is:
```
15
```
or any value not between 20 and 98 (inclusive), the output is:
```
Input must be 20-98
```
For coding simplicity, follow each output number by a space, even the last one.

Use a while loop. Compare the digits; do not write a large if-else for all possible same-digit numbers (11, 22, 33, …, 88), as that approach would be cumbersome for larger ranges.