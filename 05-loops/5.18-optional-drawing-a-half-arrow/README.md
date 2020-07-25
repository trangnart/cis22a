# 5.18 LAB*: Program: Drawing a half arrow
This program outputs a downwards facing arrow composed
of a rectangle and a right triangle.
The arrow dimensions are defined by user specified arrow base height,
arrow base width, and arrow head width.

## `arrowBaseHeight`
Modify the given program to use a loop to output an arrow base of
height `arrowBaseHeight`.

## `arrowBaseWidth`
Modify the given program to use a loop to output an arrow base of
width `arrowBaseWidth`.
Use a nested loop in which the inner loop draws the `*`’s, and the outer
loop iterates a number of times equal to the height of the arrow base.

## `arrowHeadWidth`
Modify the given program to use a loop to output an arrow head of
width `arrowHeadWidth`.
Use a nested loop in which the inner loop draws the `*`’s, and the outer
loop iterates a number of times equal to the height of the arrow head.

## Drawing the head
Modify the given program to only accept an arrow head width that is
larger than the arrow base width.
Use a loop to continue prompting the user for an arrow head width until the
value is larger than the arrow base width.

```
while (arrowHeadWidth <= arrowBaseWidth) {
    // Prompt user for a valid arrow head value
}
```

Example output for
`arrowBaseHeight` = `5`,
`arrowBaseWidth` = `2`,
and `arrowHeadWidth` = `4`:
```
Enter arrow base height:
5
Enter arrow base width:
2
Enter arrow head width:
4

**
**
**
**
**
****
***
**
*
```