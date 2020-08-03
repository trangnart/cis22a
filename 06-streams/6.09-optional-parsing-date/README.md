# 6.9 LAB: Parsing dates
Complete `main()` to read dates from input, one date per line.
Each date's format must be as follows: `March 1, 1990`.
Any date not following that format is incorrect and should be ignored.
Use the `substr()` function to parse the string and extract the date.
The input ends with `-1` on a line alone.
Output each correct date as: `3/1/1990`.

## Example
### Input
```
March 1, 1990
April 2 1995
7/15/20
December 13, 2003
-1
```

### Output
```
3/1/1990
12/13/2003
```