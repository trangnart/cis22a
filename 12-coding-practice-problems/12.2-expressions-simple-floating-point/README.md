# 12.2 PRACTICE: Expressions*: Simple floating-point expression
Write an assignment statement for the following mathematical equation:

```
y = (1/3)x + (x/4) + 2x
```

Keep `x` as an integer. Use an expression that matches the equation's right side as closely as possible. If the input is `-1`, the output is `-2.58333`.

Hints:
* Don't rearrange the equation or try to simplify it.
* If both operands of division (or other operators) are integers, integer division is performed, which rounds down; so for example `1/2` is `0`. So make at least one operand a floating-point type, as in `1.0/2`, or `1.0/2.0`, to cause floating-point division.