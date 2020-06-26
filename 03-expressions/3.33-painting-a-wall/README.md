# 3.33 LAB*: Program: Painting a wall
Output each floating-point value with two digits after the decimal point, which can be achieved by executing
`cout << fixed << setprecision(2);` once before all other cout statements.

(1) Prompt the user to input a wall's height and width. Calculate and output the wall's area. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.
```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
```
(2) Extend to also calculate and output the amount of paint in gallons needed to paint the wall. Assume a gallon of paint covers 350 square feet. Store this value using a const double variable. (2 pts)
```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
Paint needed: 0.51 gallons
```
(3) Extend to also calculate and output the number of 1 gallon cans needed to paint the wall. Hint: Use a math function to round up to the nearest gallon. (2 pts)
```
Enter wall height (feet):
12.0
Enter wall width (feet):
15.0
Wall area: 180.00 square feet
Paint needed: 0.51 gallons
Cans needed: 1 can(s)
```