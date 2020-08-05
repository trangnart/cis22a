# 7.20 PRACTICE: Functions*: Rotate three values
Given three function parameters `p1`, `p2`, `p3`,
rotate the values to the right.
Rotate means to shift each item to the item on the right,
with the rightmost item rotating around to become the leftmost item.
If initial values are `2 4 6`, final values are `6 2 4`.

## Hints
* Declare the function's three parameters as reference type.
Function return type is void.
* Use a tmp variable in the function (similar to when swapping two variables).
Your first assignment statement in the function should be assigning `tmp`
with one of the three parameter's value.
* Be careful not to overwrite a value that you expect to use.
The order in which you do the assignments matters.