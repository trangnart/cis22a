Project: Exam Statistics

Here is what your program will do: first it welcomes the user and displays the purpose of the program:

```
Welcome!
This program provides exam statistics for a CIS class.
```
It then prompts the user to enter the name of an input file:

```
What is the input file's name?
```
Assume the file contains the final exam' scores for a CIS class. Each score is preceded by the student name. Semicolon is used to separate the name from the score, as shown below:

```
AGUSTIN, MELVIN A; 45
```
The program will:
* Read the contents of the file into two parallel arrays, one for the students' names and another one fo the final exam scores.
* Calculate the class average.
* Sort data in descending order by score.
* Generate the output file's name: if the input file name is scores.txt, the output file name is sortedScores.txt.
* Write the arrays after sorting to an output file (same format as the input file: name, score)
* Display the number of students in this class and the class average.
* Display the lowest score and the names of the students with that score.

Design: Define and call functions: each function should be in charge of a single task, such as
* print a welcome message,
* read data from file into two parallel arrays,
* calculate class average,
* sort by score,
* write to file, etc.
Write a short comment for each function definition, as demonstrated in the previous labs. Here is an example for the sequential search function:

```
/*
 This function searches a list of integers for a given target
      It returns -1 if not found.
      It returns the index of the first element in the array
      that is equal to the target value.
 */
 ```
Another requirement is to place main() in the beginning of the source file. Here is an example:

```
double calcAvg( int, int); // Function Declaration

int main()
{
    cout << calcAvg(90, 97) << endl; // Function Call
    return 0;
}

// Function Definition, including the short comment
/*
This function calculates and returns the average of its
parameters, two integers
*/
double calcAvg( int s1, int s2)
{
     return (s1 + s2) / 2.0;
}
```