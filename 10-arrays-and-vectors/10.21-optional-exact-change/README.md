# 10.21 LAB: Exact change - functions
Write a program with total change amount as an integer input that outputs the change using the fewest coins, one coin type per line. The coin types are dollars, quarters, dimes, nickels, and pennies. Use singular and plural coin names as appropriate, like 1 penny vs. 2 pennies.

Ex: If the input is:

```
0
```
or less, the output is:

```
no change
```
Ex: If the input is:

```
45
```
the output is:

```
1 quarter
2 dimes
```
Your program must define and call the following function. Positions 0-4 of coinVals should contain the number of dollars, quarters, dimes, nickels, and pennies, respectively.
`void ExactChange(int userTotal, vector<int>& coinVals)`

> Note: This is a lab from a previous chapter that now requires the use of a function.