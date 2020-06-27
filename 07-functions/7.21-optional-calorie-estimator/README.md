# 7.21 PRACTICE: Functions*: Calorie estimator
Write a function ActivityCalories that takes a string indicating an activity (sit, walk, run, bike, swim) and duration in minutes (integer), and returns the estimated calories expended (double). Calories per minute for a 150 lb person (source):

sit: 1.4 walk: 5.4 run: 13.0 bike: 6.8 swim: 8.7

If the input is sit 2, the output is 2.8.

Hints:

* Use an if-else statement to determine the calories per minute for the given activity

* Return the calories per minute times the minutes spent.