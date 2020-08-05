# 6.9 LAB: Parsing dates
Complete `main()` to read dates from input, one date per line.
Each date's format must be as follows: `March 1, 1990`.
Any date not following that format is incorrect and should be ignored.
Use the `substr()` function to parse the string and extract the date.
The input ends with `-1` on a line alone.
Output each correct date as: `3/1/1990`.

## Example

### Input
Input is the file called `dates.txt`.
Include `fstream` and use `ifstream` to read the file instead of reading it
from the keyboard.

File content looks something like this:
```
March 1, 1990
April 2 1995
7/15/20
December 13, 2003
-1
```

### Output
Your program should run without needing nay user input from the keyboard and
gives the output below:
```
3/1/1990
12/13/2003
```

## Hint
I'll let you use my `split()` function in Section [4.24] instead of
doing your own space-finding.
Figure out how to use it :)

[4.24]: ../../04-branches/4.24-optional-name-format/paul-solution.cpp