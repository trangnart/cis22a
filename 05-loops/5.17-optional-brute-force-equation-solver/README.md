# 5.17 LAB: Brute force equation solver
Numerous engineering and scientific applications require
finding solutions to a set of equations.
Ex: `8x + 7y = 38` and `3x - 5y = -1` have a solution `x = 3, y = 2`.
Given integer coefficients of two linear equations with variables `x` and `y`,
use brute force to find an integer solution
for `x` and `y` in the range `-10` to `10`.

Ex: If the input is:
```
8 7 38
3 -5 -1
```

the output is:
```
3 2
```

Use this brute force approach:
```
For every value of x from -10 to 10
   For every value of y from -10 to 10
      Check if the current x and y satisfy both equations. If so, output the solution, and finish.
```

Ex: If no solution is found, output:
```
No solution
```
You can assume the two equations have no more than one solution.

_Note_: Elegant mathematical techniques exist to solve such linear equations.
However, for other kinds of equations or situations, brute force can be handy.

## Hints
Here's the loop you need to construct:
```
for (int x = -10; x <= 10; ++x) {
    for (int y = -10; y <= 10; ++y) {
       ...
    }
}
```