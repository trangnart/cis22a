# 12.46 PRACTICE: Functions***: Find next substring
Write a function that returns the index of the next occurrence of a substring in a string. Inputs are the string, start index, and substring. If not found, return -1. Do not use built-in string functions. If the input is `"heyhey-friend", 1, "hey"`, the output is `3` (where the second "hey" starts).

Hints:
* This is fairly difficult. You might start by writing a program that looks for a next single character rather than substring. Once that program is working and tested, then you're ready to look for a substring rather than a character.
* To look for a substring, consider writing a loop to do your own string comparison. Other approaches are possible.
* While you iterate through the string, realize that you can stop if you are near enough to the end that the substring can't possibly fit. So don't iterate all the way to `i < string.size();` stop sooner than that.