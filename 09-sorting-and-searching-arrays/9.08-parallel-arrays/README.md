# 9.8 Lab: Parallel Arrays
_Project: Exam Statistics_

## Input/Outputs
You will have an input file called `scores.txt`.
Read this file to gather statistics.

### Input
Line looks like:

```
AGUSTIN, MELVIN A; 45
```

### Output to File
Program should output to a file called `sortedScores.txt`.
Do not hard-code the input or output file names.

### Output to the Screen
```
This program provides exam statistics for a CIS class.
What is the input file's name? scores.txt
Number of Students................................13
Class Average.....................................87.62
Lowest Score......................................78
Lowest Students:..................................
                                                  AGUSTIN, MELVIN A
                                                  BUI, NIKKY
                                                  DOHERTY, JASON P
                                                  SYED, SAMIR A
                                                  WILKINS, JANE D
```

## Parts and Strategy

### Strategy
Your program should do the following:
1. Display the welcome message
2. Get input file name (should type in `scores.txt`)
3. Read `scores.txt` and get the average score
4. Sort _both_ vectors by scores and return lowest score
5. Get the lowest performing students
6. Change the filename to `sortedScores.txt`
7. Write the sorted scores to the file `sortedScores.txt`
8. Output the results as seen above

### Part 1: Display Welcome Message
```cpp
void DisplayWelcomeMesg();
```
Simply prints out the welcome message above.

### Part 2: Ask and Set Input File Name
```cpp
void GetAndSetInputFilename(string&);
```
Ask the user to input a file name.
Save that filename to the variable.
Remember you're passing in a variable,
that variable's value will change inside this function.
There's no return value.

### Part 3: Read File and Populate Vectors
```cpp
double ReadFile(const string&, vector<string>&, vector<int>&);
bool SplitNameScore(const string&, string&, int&);
```
Read in the file named above and pass it to the `ReadFile()`
function along with the two vectors you declared in `main()`.
This function should read in the file line-by-line then call
`SplitNameScore()` function to split the line and set name & score.

After you have gotten name and score, add them to the two vectors.

### Part 4: Sorting the Vectors
```cpp
int SortScores(vector<int>&, vector<string>&);
```
Pass the scores and names vectors in to this function to be sorted.
Use selection sort in [9.05] to sort only the scores.
When you have found the smallest value, swap _both_ values of
scores and names so that they both are sorted in the same order.

Save the lowest score and return that.

### Part 5: Get the Bottom List
```cpp
vector<string>
GetBottomStudents(const vector<string>&, const vector<int>&);
```
Get the list of bottom performing students by taking the first score in
the scores `vector`.
Compare and push the names of students matching that score to a
local `vector` then return that vector.

### Part 6: Set Output File Name
```cpp
void SetOutputFilename(string&);
```
Change the filename to be `sortedScores.txt` by using `toupper()` on
the filename value.
Append `sorted` to the name and set that as the variable.

### Part 7: Combine the Lists in Sorted Order
```cpp
void WriteSortedFile(const string&, const vector<string>&, const vector<int>&);
```
Takes a the filename renamed by the `SetOutputFilename()` function above
and write out the values of both the vectors.
They should already been sorted.

#### Output file of `sortedScores.txt`
```
SYED, SAMIR A; 78
AGUSTIN, MELVIN A; 78
BUI, NIKKY; 78
DOHERTY, JASON P; 78
WILKINS, JANE D; 78
WINARDY, AGUS; 86
ALAM, SHAKRA; 89
FERESIN, PAULO; 89
SIMOVA, MARTINA; 92
ETTARE, RYAN D; 95
CHEN, YUMAW; 98
TSUBOTA, ATSUKO; 100
JEFFERS, SUSAN; 100
```

### Part 8: Output to Screen
When you get here, hopefully you have saved all the returns from the
functions and print the output to screen as above.

[9.05]: ../../09-sorting-and-searching-arrays/9.05-descending-selection-sort/README.md