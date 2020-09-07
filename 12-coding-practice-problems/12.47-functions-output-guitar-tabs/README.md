# 12.47 PRACTICE: Functions***: Output guitar tabs
![Hard]

An earlier problem introduced guitar tabs.
In this problem, the user can enter a sequence of chords, and the program should output the tabs in sequence.
The first input is the number of chords to follow.

## Input
```
4 G C G D
```

## Output
```
e|-3-0-3-2-
B|-0-1-0-3-
G|-0-0-0-2-
D|-0-2-0-0-
A|-2-3-2---
E|-3---3---
```

## Hints
* Use 6 C++ strings, one for each guitar string
("string" below will mean C++ string unless otherwise noted).
* Start by the e string with `e|-`, the `B` string with `B|-`, etc.
* For each user chord, append (using `append()`) to each string the appropriate item (a number or `-`) plus `-`, like `2-`.
* When done, print the `6` strings one at a time separated by newlines.

[Hard]: https://flat.badgen.net/badge/Hard/★★★☆/red