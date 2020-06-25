# 12.3 PRACTICE: Expressions*: Distance formula
Map/GPS applications commonly compute the distance between two points. A point may be a coordinate on an x-y plane like `(1.5, 2.0)`. The distance formula is `d = √((x2 - x1)^2 + (y2-y1)^2)` (basically, Pythagorean's Theorem). Given two points, output the distance between them. If the input is `(1.5, 2.0) (4.5, 6.0)`, the output is 5.

Hints:
* Read in the parentheses and commas as in `cin >> c` to skip over them, and read in the numbers as doubles.
* Add `#include <math.h>` and then use the `sqrt()` function. For squaring, you might use the `pow()` function with a second parameter of `2`.