# 12.24 PRACTICE: Loops**: Academic index score table
Many universities calculate a weighted sum of an applicant's high school GPA and standardized test scores, whose value (called an Academic Index Score or AIS) must exceed a minimum threshold to be considered for admission. Ex: AIS = 2.5 * (GPA / 4.0) * 100 + (test_score / 1600) * 100 must be at least 270. Write a program that, given a threshold, prints a table indicating the minimum GPA / test score combinations that meet the threshold. Use doubles for all values. Each row is GPA then test score. GPA should range from 3.0 to 4.0 in increments of 0.1.

Hints:
* Do some algebra first to solve the above equation for test_score.
* Write a for loop that iterates 11 times, for 3.0 to 4.0 in 0.1 increments. For each iteration, print the row GPA, then calculate the test_score using the equation you created.
* Be careful to avoid integer division, which yields a different result than floating-point division.