# 3.25 LAB: Expression for calories burned during workout
The following equations estimate the calories burned when exercising (source):

## Women:
```
Calories =
 ( (Age * 0.074)
   — (Weight * 0.05741)
   + (Heart Rate * 0.4472)
   — 20.4022
 ) * Time / 4.184
```

## Men
```
Calories =
 ( (Age * 0.2017)
   + (Weight * 0.09036)
   + (Heart Rate * 0.6309)
   — 55.0969
 ) * Time / 4.184
```

Write a program with inputs age (years), weight (pounds), heart rate (beats per minute), and time (minutes), respectively. Output calories burned for women and men.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
`cout << fixed << setprecision(2);` once before all other `cout` statements.

Ex: If the input is:
```
49 155 148 60
```
the output is:
```
Women: 580.94 calories
Men: 891.47 calories
```