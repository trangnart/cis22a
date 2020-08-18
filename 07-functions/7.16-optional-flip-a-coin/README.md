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

---
# Functions
## `rand()`
`rand()` returns a random number between 0 and `RAND_MAX`
(`RAND_MAX` is a very large number defined by the system).

### Examples
```cpp
v1 = rand() % 100;         // v1 in the range 0 to 99
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
```

## `srand()`
`srand()` is a random number initializer
(a seed which changes the order of the _random_ number sequence).

### Examples
```cpp
srand(2);
cout << rand() % 4 << end;
cout << rand() % 4 << end;
cout << rand() % 4 << end;
```

It will _always_ return:
```
1
0
2
```
Regardless of how many times you run your program.

If you change your program to:
```cpp
srand(2);
cout << rand() % 4 << end;
srand(2);
cout << rand() % 4 << end;
srand(2);
cout << rand() % 4 << end;
```

It will always return `1`.
Because `srand(2)` initializes the sequence to `1`, `0`, `2`, etc.