# 6.10 LAB*: Program: Data visualization (Streams)
This program operates in two modes:

* User input
* File input

When file `novels.txt` does not exist,
the program takes in input from `cin` and write it to file `novels.txt`.

When file `novels.txt` exists.
It reads the file and output the content according to the specifications below.

## 1 Get User Input
Program checks if `novels.txt` exists, it doesn't until you run the program
the first time, if everything goes well, it should create the file.

Open the `novels.txt` file and prepare for input.
See [ex-write-file.cpp] for information on how to write to a file.

### 1.1 Title and Data
1. Prompt the user for a title for data.
2. Output the title.
3. Write the title to a the `novels.txt`

#### Example
```
Enter a title for the data:
Number of Novels Authored
You entered: Number of Novels Authored
```

### 1.2 Headers
Prompt the user for the headers of two columns of a table.
Output the column headers.
Also write the headers (one per line) into `novels.txt`

#### Example
```
Enter the column 1 header:
Author name
You entered: Author name

Enter the column 2 header:
Number of novels
You entered: Number of novels
```

### 1.3 Write Data
Prompt the user for data points.
Data points must be in this format: `string`, `int`.

Store the information before the comma into a string variable and the
information after the comma into an integer.
The user will enter `-1` when they have finished entering data points.
* Output the data points.
* Write the data points to an output file.
Assume the user enters valid input.

See [ex-split-name-age.cpp] for information on how to parse the data.

#### Example
```
Enter a data point (-1 to stop input):
Jane Austen, 6
Data string: Jane Austen
Data integer: 6
```

### 1.4 Close the File
Close the output file.

## 2 Read `novels.txt`
Open an input file named `novels.txt`.
Now you are using the same file but this time you are reading data
from the file and output the information in a formatted table.

See [ex-read-file.cpp] on how to read from a file.
Also see [ex-setw-setfill.cpp] for how to use these functions.

* The title is _right_ justified with a `setw()` value of `33`.
* Column 1 is _left_ justified has a `setw()` value of `20`.
* Column 2 is _right_ justified has a `setw()` value of `23`.

### 2.1 Example
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
Ian Fleming         |                     14
J.K. Rowling        |                     14
Stephen King        |                     54
Oscar Wilde         |                      1
```

### 2.2 Close the File
Close the input file.

## 3 Output Graph
Open the file again: an input file named `novels.txt`.
Now you are using the same file but this time you are reading data from the
file and output the information as a formatted histogram.
Each name is _right justified_ with a `setw()` value of `20`.
Finally, close the input file.

### 3.1 Example
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
         Ian Fleming **************
        J.K. Rowling **************
        Stephen King ******************************************************
         Oscar Wilde *
```

---
## Concepts

### 1 Writing to a File
* Learn how to read a file: [ex-read-file.cpp].
* Learn how to write to a file: [ex-write-file.cpp].

#### 1.1 Recreate your version
Create your version of [ex-write-file.cpp]

#### 1.2 Use a loop: ask for lines of texts
* Modify your program to loop until `getline` gets a `-1`
* Write the line to `example-data.temp` including the `-1`

#### 1.3 Use `ex-read-file.cpp`
* Use [ex-read-file.cpp] to read your newly created file

### 2 File Output
The basic structure of file input (read a file):
```cpp
#include <fstream>
int main() {
    string line;
    ofstream sout;
    in.open("file.txt");
    if (!sout.is_open())
        return 1; // error
    // life is good
    sout << "Hey there!" << endl;
    sout.close();
    return 0;
}
```
* Include `fstream`
* Declaring an `ofstream` variable
* Open a stream to a file (`open()`)
* Check for failure to open
* Use the `ofstream` variable `sout` same way you use `cout`
* Close the stream (`close()`)

### 3 `stringstream`
It's also good to understand `stringstream` though you won't need it
to solve this problem but it will be useful if you want to split a
sentence into words.
`stringstream` allows you to convert a string into a stream like `cin`.

See [ex-stringstream.cpp] for example on how to use it.

### 4 `stoi()`
```
int stoi(string s);
```

#### Example
Use `stoi()` function to convert string to integer as followed:

```cpp
string num = "31";
int i = stoi(num);
```

### 5 `setw()` & `setfill()`
```cpp
setw(int n)
setfill(char c)
```
`setw()` sets a fixed width that `cout` should use.
`setfill()` sets the character to use for filling non-printed text.

See [ex-setw-setfill.cpp] for usage and examples.

[ex-read-file.cpp]: ../6.09-optional-parsing-date/ex-read-file.cpp
[ex-write-file.cpp]: ../6.10-data-visualization-streams/ex-write-file.cpp
[ex-stringstream.cpp]: ../6.10-data-visualization-streams/ex-stringstream.cpp
[ex-setw-setfill.cpp]: ../6.10-data-visualization-streams/ex-setw-setfill.cpp
[ex-name-age.cpp]: ../6.10-data-visualization-streams/ex-name-age.cpp