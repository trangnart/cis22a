# 6.10 LAB*: Program: Data visualization (Streams)
## Title and Data
Prompt the user for a title for data.
Output the title.

### Example
```
Enter a title for the data:
Number of Novels Authored
You entered: Number of Novels Authored
```

## Headers
Prompt the user for the headers of two columns of a table.
Output the column headers.

### Example
```
Enter the column 1 header:
Author name
You entered: Author name

Enter the column 2 header:
Number of novels
You entered: Number of novels
```

## Write `novels.txt`
Open an output file named `novels.txt`.
Prompt the user for data points.
Data points must be in this format: `string`, `int`.

Store the information before the comma into a string variable and the
information after the comma into an integer.
The user will enter `-1` when they have finished entering data points.
* Output the data points.
* Write the data points to an output file.
Assume the user enters valid input.

### Example
```
Enter a data point (-1 to stop input):
Jane Austen, 6
Data string: Jane Austen
Data integer: 6
```

## Close the File
Close the output file.

## Read `novels.txt`
Open an input file named "novels.txt".
Now you are using the same file but this time you are reading data
from the file and output the information in a formatted table.
The title is right justified with a `setw()` value of `33`.
Column 1 has a `setw()` value of `20`.
Column 2 has a `setw()` value of `23`.

### Example
```
        Number of Novels Authored
Author name         |       Number of novels
--------------------------------------------
Jane Austen         |                      6
Charles Dickens     |                     20
Ernest Hemingway    |                      9
Jack Kerouac        |                     22
F. Scott Fitzgerald |                      8
Mary Shelley        |                      7
Charlotte Bronte    |                      5
Mark Twain          |                     11
Agatha Christie     |                     73
Ian Flemming        |                     14
J.K. Rowling        |                     14
Stephen King        |                     54
Oscar Wilde         |                      1
```

## Close the File
Close the input file.

## Output Graph
Open the file again: an input file named `novels.txt`.
Now you are using the same file but this time you are reading data from the
file and output the information as a formatted histogram.
Each name is right justified with a `setw()` value of `20`.
Finally, close the input file.

### Example
```
         Jane Austen ******
     Charles Dickens ********************
    Ernest Hemingway *********
        Jack Kerouac **********************
 F. Scott Fitzgerald ********
        Mary Shelley *******
    Charlotte Bronte *****
          Mark Twain ***********
     Agatha Christie *************************************************************************
        Ian Flemming **************
        J.K. Rowling **************
        Stephen King ******************************************************
         Oscar Wilde *
```