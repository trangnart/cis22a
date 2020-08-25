# 7.30 LAB: Step counter
A pedometer treats walking `2,000` steps as walking `1` mile.
Write a program whose input is the number of steps,
and whose output is the miles walked.

Output each floating-point value with two digits after the decimal point,
which can be achieved by executing
`cout << fixed << setprecision(2);` once before all other cout statements.

## Input/Output
Input | Output
--- | ---
`5345` | `2.67`

## Function Declaration
```cpp
double StepsToMiles(int userSteps);
```