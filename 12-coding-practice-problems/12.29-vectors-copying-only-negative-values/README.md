# 12.29 PRACTICE: Vectors*: Copying only negative values
![Easy]

A list of 6 integers is input into vector `listInts`.
Complete the program to copy only the negative integers to a new vector `listNegInts`.
Output the number of negative elements, and the negatives list.

## Input
```
5 -2 0 9 -66 -4
```

## Output
```
3
-2
-66
-4
```

## Hints
* When declaring `listNegInts`, don't specify a size.
Instead, add elements using `listNegInts.push_back(…)`
* Write a first for loop that copies only the negative integers to `listNegInts`, then write a second for loop that outputs.
* Your copying for loop should have an if statement that only copies the current `listInts` element if negative.
* The number of items in `listNegInts` can be determined using `listNegInts.size()`.
No need to have a separate variable keeping track.

[Easy]: https://flat.badgen.net/badge/Easy/★☆☆☆/green