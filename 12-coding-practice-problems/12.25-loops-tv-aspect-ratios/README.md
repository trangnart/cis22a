# 12.25 PRACTICE: Loops**: TV aspect ratios
A TV's size indicates the TV's diagonal. Thus, one 60" TV could have a different width and height than another 60" TV, both yielding a 60" diagonal. For a given TV diagonal, output a table listing possible widths and heights, each row increasing width by 1 inch. Only list rows where width is greater than height. Define diagonal, width, and height variables as doubles, but note that width will only take on rounded values like 20.0, 21.0, etc.

Hints:
* Use Pythagorean's Theorem, solving for height. Use the cmath library to compute the needed square root.
* Write a for loop that iterates for widths ranging from 1 to the diagonal (you could define tighter bounds, but the program works with those looser bounds and is simpler).
* In the loop, compute the height for the given diagonal and width, using your height equation. Then use an if statement to output only if the width is greater than the height.