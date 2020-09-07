# 12.14 PRACTICE: Loops (while)**: Output rocket height
![Difficult]

Suppose a launched toy rocket's height is computed as
```
h = vi*t - 5t2
```
`vi` is the initial velocity, and `t` is time in seconds since the launch (starting at `0`).

Write a program to read the initial velocity,
then output the time and the rocket's height once per second.
Stop when the height would be negative, meaning the rocket hit the ground
(don't print the negative).
Assume all values are integers.

## Input
`20`

## Output
```
0 0
1 15
2 20
3 15
4 0
```

## Hints
* Use a `while` loop.
* `t` squared is easily calculated as `t * t`.
* Use this expression for the while loop: `(rocketHeight >= 0)`.
* Don't forget to increment time inside the `while` loop (else you'll get an infinite loop).

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow