# 10.25 LAB: Replacement words
Write a program that replaces words in a sentence.
The input begins with an integer indicating the number of word
replacement pairs (original and replacement) that follow.

The next line of input begins with an integer indicating the number
of words in the sentence that follows.
Any word on the original list is replaced.

## Input
```
3 automobile car manufacturer maker children kids
The automobile manufacturer recommends car seats for children if the automobile doesn't already have one.
```
The first set of inputs require _3 sets_ of words (e.g. `automobile car`, etc).
The second line is a whole line of text.
_Hint_ add a `cin.ignore(1)` before `getline()` to skip the `\n` you get
from the first set of inputs.

## Output
```
The car maker recommends car seats for kids if the car doesn't already have one.
```

You can assume the original words are unique.
For coding simplicity, follow each output word by a space, even the last one.

## Prototype
```cpp
int FindWordInWordList(const vector<string>& wordList, const string& wordToFind);
```
Your program must define and call the following function that returns index of word's first occurrence in wordList. If not found, then the function returns `-1`.

## Hints
* For words to replace, use two vectors: One for the original words, and the other for the replacements.
* Find the index of where the first word is in the `vector` will give you the
location of the word to replace.
* Use `stringstream` to parse the sentence into words

## Using the `find()` Function With
```cpp
auto it = find(v.begin(), v.end(), "findme");
if (it == v.end()) {
    return -1;
}
cout << "index of 'findme' is at index " << distance(it, v.begin()) << endl;
```
This is a quicker way of searching for a string in a `vector`.