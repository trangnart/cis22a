# 12.23 PRACTICE: Loops**: Word count
![Difficult]

Many text processing tools like Microsoft Word or Google Docs will count the number of "words" in text.
A word is a sequence of any characters other than a space.
Write a program that reads an input line of text, and outputs the number of words in that text.

## Input/Output
Input | Output
--- | ---
`I have a bike` | `4`

## Hints
* Use `getline` to read the line of text
* Use a for loop to walk through each character in the string.
Count the words as you go through that loop.
You'll need a variable to keep that count.
Initialize it to `0` before the loop, and then increment it whenever you see a new word.
* Use a boolean variable to indicate whether you are currently "in" a word or not.
If you see a space, set that variable with false.
Else, set it to true.
* There are actually three cases to consider in each loop iteration.
Either you are at a space (so are not in a word),
you are not at a space and you are NOT already in a word (so you found a new word),
or you are not at a space and you ARE already in a word (so there's nothing to do). So create an if -- else if -- else branch statement.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow