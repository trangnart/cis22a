# 9.5 LAB: Descending selection sort with output during execution
Write a `void` function `SelectionSortDescendTrace()`
that takes an integer array, and sorts the array into descending order.

The function should use _nested loops_ and output the array after
each iteration of the _outer_ loop,
thus outputting the array `N-1` times (where `N` is the size).

Complete `main()` to read in a list until `-1`
then call the `SelectionSortDescendTrace()` function.

### Input
```
3 1 2 -1
```

### Output
```
0: 1 3 2
1: 1 2 3
2: 1 2 3
```