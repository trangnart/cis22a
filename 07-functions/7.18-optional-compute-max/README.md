# 7.18 PRACTICE: Functions**: Compute max
Write a function called `MaxFive()` that returns the maximum of
five integer parameters.
Ex: `MaxFive(3, 5, 1, 0, 2)` returns `5`.

## Function Prototypes
```cpp
int MaxFive(int, int, int, int, int);
int MaxFive(vector<int>);
```
You can use either to code.
If you use vector, call `MaxFive(numbers)` returns `5`.

## Hints
* Use four if statements. (Don't use if-else).
* Use a variable `maxFound` to keep track of the largest value seen so far.
* Initialize `maxFound` to one of the parameters.
(Not to `0`, which wouldn't handle the case when all parameters are negative).
* Don't forget to return `maxFound`.

If you'd like you can use vector to make this simpler.