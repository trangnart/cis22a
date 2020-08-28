# 9.5 LAB: Descending selection sort with output during execution
Write a void function `SelectionSortDescendTrace()`
that takes an integer array, and sorts the array into descending order.
The function should use nested loops and output the array after each iteration of the outer loop, thus outputting the array `N`-1 times (where
N is the size). Complete `main()` to read in a list of up to `10`
positive integers (ending in `-1`) and then call the `SelectionSortDescendTrace()` function.

If the input is:

```
20 10 30 40 -1
```
then the output is:

```
40 10 30 20
40 30 10 20
40 30 20 10
```