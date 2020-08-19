# 7.23 LAB: Convert to binary - functions
Write a program that takes in a positive integer as input,
and outputs a string of `1`'s and `0`'s representing the integer in binary.
For an integer `x`, the algorithm is:
```
As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
```

Note: The above algorithm outputs the `0`'s and `1`'s in reverse order.
You will need to write a second function to reverse the string.

## Input/Ouput
Input | Output
--- | ---
`6` | `110`
`20` | `10100`

Your program must define and call the following two functions.

### `IntegerToReverseBinary()`
This function should return a string of `1`'s and `0`'s representing the
integer in binary (in reverse).

### `ReverseString()`
The function should return a string representing the input string in reverse.

## Function Prototypes
```cpp
string IntegerToReverseBinary(int integerValue);
string ReverseString(string userString);
```

## Part 1: Use Constant
Use constants to test your functions to make sure they give the correct
results.

## Part 2: Read `input.txt`
Read the provided file and output the content that looks like this:
```
         6 -> 110
        20 -> 10100
        12 -> 1010
        42 -> 100101
      1020 -> 1111111111
        23 -> 10101
       416 -> 110101010
```
The function below has been provided but you must write the `cout`
statement using `setw(10)`.
```cpp
void NumberToBinary(const string& filename);
```

## Note
This is a lab from a [5.15] that now requires the use of a function.

## Hints `dlroWolleH`
The fastest way to reverse the string is to swap the values at both ends:
Itr | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
--- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
- | d | l | r | o | W | o | l | l | e | H
0 | `H` | l | r | o | W | o | l | l | e | `d`
1 | H | `e` | r | o | W | o | l | l | `l` | d
2 | H | e | `l` | o | W | o | l | `r` | l | d
3 | H | e | l | `l` | W | o | `o` | r | l | d
4 | H | e | l | l | `o` | `w` | o | r | l | d

* Half way index mark is `10 / 2 - 1 = 4`.
* Write a loop that goes from begin to half way
* Algorithm:
  * Store last `char` in a `temp`
  * Put first char at the last place
  * Replace first char with `temp`

### String Function `at()`
How to use `at()` to swap characters.
```cpp
   string binary = "1100";
   size_t pos = binary.length() - 1;
   char temp = binary.at(0);
   binary.at(0) = binary.at(pos);
   binary.at(pos) = temp;
```


[5.15]: ../../05-loops/5.15-optional-convert-to-binary/README.md
