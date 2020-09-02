# 10.23 LAB: Count characters - functions
Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string.

## Input/Output
Input | Output
--- | ---
`n Monday` | `1`
`z Today is Monday` | `0`
`n It's a sunny day` | `2`
`n Nobody` | `0`

Case matters. `n` is different than `N`.

## Prototype
```cpp
int CountCharacters(char userChar, const string& userString);
```
Your program must define and call the following function that returns the number of times the input character appears in the input string.

## Note
This is a lab from a previous chapter that now requires the use of a function.