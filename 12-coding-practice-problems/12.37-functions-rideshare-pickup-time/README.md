# 12.37 PRACTICE: Functions**: Rideshare pickup time
Rideshare companies like Uber or Lyft track the x,y coordinates of drivers and customers on a map. If a customer requests a ride, the company's app estimates the minutes until the nearest driver can arrive. Write a function that, given the x and y coordinates of a customer and the three nearest drivers, returns the estimated pickup time. Assume drivers can only drive in the x or y directions (not diagonal), and each mile takes 2 minutes to drive. All values are integers.

Hints:
* Break the problem into three parts. In the first part, compute the three distances.
* In the second part, determine the minimum distance. In the third part, compute and return the time.
* Don't forget to use absolute value when computing the x distance, and again for the y distance, because direction doesn't matter. You may wish to just write a small absolute value function.