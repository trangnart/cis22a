# 4.22 LAB: Exact change
Write a program with total change amount as an integer input,
and output the change using the fewest coins, one coin type per line.
The coin types are:
* Dollars
* Quarters
* Dimes
* Nickels
* Pennies

Use singular and plural coin names as appropriate,
like `1 Penny` vs. `2 Pennies`.

Ex: If the input is:
```
0
```
(or less than 0), the output is:
```
No change
```
Ex: If the input is:
```
45
```
the output is:
```
1 Quarter
2 Dimes
```
---
## Hint
Getting the fewest number of coins try to divide the amount by
the largest denominator first (eg. dollars, then quarters, ... then pennies).

For example: if you have `$1.51` you would divide `151` by `100` first to see
how many and how many left over?

```
151 / 100 = 1 (dollar)
151 % 100 = 51 (cents)
51 / 25 = 2 (quarters)
51 % 25 = 1 (cent)
1 / 10 = 0 (dimes)
1 / 5 = 0 (nickels)
1 / 1 = 1 (penny, done)
```