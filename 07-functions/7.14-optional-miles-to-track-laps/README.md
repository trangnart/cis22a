# 7.14 LAB: Miles to track laps
One lap around a standard high-school running track is exactly `0.25` miles.
Write a program that takes a number of miles as input,
and outputs the number of laps.

Output each floating-point value with two digits after the decimal point,
which can be achieved by executing
```
cout << fixed << setprecision(2);
```
once before all other `cout` statements.

## Examples
Input | Output
--- | ---
`1.5` | `6.00`
`2.2` | `8.80`

## Function Prototype
Your program must define and call a function:
```
double MilesToLaps(double userMiles);
```