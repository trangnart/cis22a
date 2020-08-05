# 7.26 LAB: Remove spaces - functions
Write a program that removes all spaces from the given input.

## Example
### Input
```
Hello my name is John.
```

### Output
```
HellomynameisJohn.
```

### Function Prototype
Your program must define and call the following function.
The function should return a string representing the input string without spaces.

#### `RemoveSpaces()`
```cpp
string RemoveSpaces(string userString);
```

## Note
This is a lab from a previous chapter that now requires the use of a function.

## Hints
There are a few methods to employ to remove spaces from a string:
1. Use `find()` and `replace()` in a loop to remove the spaces.
2. Loop through every character, `cout` any that isn't a space.
This is the easiest method.
3. Use `find()` and `erase()` in a loop to remove the spaces.
This is the preferred way to remove spaces.
See [ex-remove-spaces-erase.cpp].
_Note_: Do not use this method in your solution.
4. Use `regex` to remove the spaces.
This is advance topic but most versatile.
See [ex-remove-spaces-regex.cpp].
_Note_: Do not use this method in your solution.
5. `find(' ')` and `substr()` from start to length of that word and `cout`
the word without a `endl`.
This is the straight-forward approach.
You probably have to worry about multiple spaces though.

## Functions
### `replace()`
```cpp
string& replace(size_t pos, size_t len, const string& str);
```
Replace the content of a string at `pos` to the `len` with a new `str`.

Example:
```cpp
string s = "My hamster is good!";
size_t pos = s.find("good");
s.replace(pos, 4, "bad");
```

### `erase()`
```cpp
string& erase(size_t pos = 0, size_t len = npos);
```
Erases from `pos` to `len` and reduce the string size.
See [ex-remove-spaces-erase.cpp] for usage example.

[ex-remove-spaces-regex.cpp]: ex-remove-spaces-regex.cpp
[ex-remove-spaces-erase.cpp]: ex-remove-spaces-erase.cpp