# 7.15 LAB: A jiffy
A “jiffy” is the scientific name for 1/100th of a second.
Given an input number of seconds, output the number of "jiffies."

Output each floating-point value with two digits after the decimal point,
which can be achieved by executing
```
cout << fixed << setprecision(2);
```
once before all other cout statements.

## Example
Input | Output
--- | ---
`15` | `1500.00`

## Function Prototype
Your program must define and call a function:
```
double SecondsToJiffies(double userSeconds);
```