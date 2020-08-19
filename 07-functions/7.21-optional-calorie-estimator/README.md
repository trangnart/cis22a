# 7.21 PRACTICE: Functions*: Calorie estimator
Write a function `ActivityCalories()` that takes a string indicating an activity
(`sit`, `walk`, `run`, `bike`, `swim`) and `duration` in minutes (`integer`),
and returns the estimated calories expended (`double`).

## Constants
Calories per minute for a `150 lb` person:
Activity | Calorie
--- | ---
sit | 1.4
walk | 5.4
run | 13.0
bike | 6.8
swim | 8.7

## Part 1: User's Input
Input | Output
--- | ---
`sit 2` | `2.8`
`swim 4` | `34.8`

## Part 2: Read in a File
Read the provided file `input.txt` and output the calculations.
Once you have opened the file for reading.
You should read in the lines and output:
```
sit for 5 minutes burns 7.0 calories
sit for 11 minutes burns 15.4 calories
run for 3 minutes burns 39.0 calories
swim for 8 minutes burns 69.6 calories
run for 69 minutes burns 897.0 calories
bike for 3 minutes burns 20.4 calories
sit for 21 minutes burns 29.4 calories
bike for 22 minutes burns 149.6 calories
walk for 1 minutes burns 5.4 calories
walk for 0 minutes burns 0.0 calories
bike for 220 minutes burns 1496.0 calories
walk for 2 minutes burns 10.8 calories
```

## Hints
* Use an if-else statement to determine the calories per minute for the given activity
* Return the calories per minute times the minutes spent.