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


---
## Practice Concepts

### 1 Reading a File
Learn how to read a file by studying [ex-read-file.cpp].

#### 1.1 Dump out content
* Create a file call 'example-data.temp'
* Add random lines of text to the file
* Add `-1` on a line by itself to the file
* Run [ex-read-file.cpp] and check the results

#### 1.2 Recreate your version
Create your version of [ex-read-file.cpp]

#### 1.3 Read up to `-1` only
* Modify your program to read up to the line `-1` only
* Do not print out `-1` but `break` out of the loop

#### 1.4 Read the `dates.txt` file
* Modify your program to read dates.txt instead

Congratulations! Use this to write your solution.

### 2 Parsing Strings
Assuming you've done [6.08] you know the basics of string manipulation.
If you haven't got the concept, return to [6.08] and study again.

[4.24]: ../../04-branches/4.24-optional-name-format/paul-solution.cpp
[6.08]: ../6.08-optional-parsing-strings/README.md
[ex-read-file.cpp]: ex-read-file.cpp