# 10.28 LAB: Output values below an amount
Write a program that first gets a list of integers from input.

The input begins with an integer indicating the number of integers that follow.

Then, get the last value from the input, which indicates a threshold.
Output all integers less than or equal to that last threshold value.

## Input
```
5 50 60 140 200 75 100
```

## Output
```
50 60 75
```

The `5` indicates that there are five integers in the list,
namely `50`, `60`, `140`, `200`, and `75`.
The `100` indicates that the program should output all integers less
than or equal to `100`, so the program outputs `50`, `60`, and `75`.

For coding simplicity, follow every output value by a space,
including the last one.

Such functionality is common on sites like Amazon,
where a user can filter results.

## Hint
Remember your old friend, `PopulateVector()`.
Optionally, you can use `Vector2String()` from [10.22].

[10.22]: ../../10-arrays-and-vectors/10.22-optional-adjust-list-by-normalizing/README.md