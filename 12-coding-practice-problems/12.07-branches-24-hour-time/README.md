# 12.7 PRACTICE: Branches**: 24-hour time
![Difficult]

24-hour time (also known in the U.S. as military time) is widely used around the world.
Time is expressed as hours since midnight.
The day starts at `00:00`, and ends at `23:59`.

Write a program that converts am/pm time to 24-hour time.
The input is two numbers and a string.

## Input/Output
Input | Output
--- | ---
`2 30 pm` | `14:30`
`12 01 am` | `00:01`

## Hints
* Think of how each hour should be handled.
`12 00 am` `-12 59 am` becomes what? `8 00 am` becomes what? `12 00 pm`? `1 00 pm`? Group the hours into cases that should be handled similarly (e.g., `1 00 am` to `11 00 am` are handled the same).
* Declare variables for `hoursAmPm`, `minAmPm`, and `hours24`.
Note that minutes for 24-hour time remain the same as for am/pm,
so no extra variable is needed.
* Use an `if-else` statement to detect each case,
and set the `hours24` appropriately.
* When outputting `hour24`, check if the hour is `0-9`
(just check for `< 10`).
If so, output a `0`. So `7` will be output as `07`.
Do the same when outputting the minutes.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow