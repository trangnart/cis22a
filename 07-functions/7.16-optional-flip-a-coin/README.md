# 7.16 LAB: Flip a coin
Write a program that simulates flipping a coin to make decisions.
The input is how many decisions are needed,
and the output is either `heads` or `tails`.
Assume the input is a value greater than `0`.

## Example
### Input
```
3
```

### Output
```
heads
tails
tails
```

For reproducibility needed for auto-grading, seed the program with a value of `2`.
In a real program, you would seed with the current time.
In that case, every program's output would be different,
which is what is desired but can't be auto-graded.

## Note
A common student mistake is to call `srand()` before each call to `rand()`.
But seeding should only be done once,
at the start of the program, after which `rand()` can be called any number of times.

## Function Prototype
Your program must define and call the following function that returns "heads" or "tails".
```cpp
string HeadsOrTails();
```