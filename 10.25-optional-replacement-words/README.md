Write a program that replaces words in a sentence. The input begins with an integer indicating the number of word replacement pairs (original and replacement) that follow. The next line of input begins with an integer indicating the number of words in the sentence that follows. Any word on the original list is replaced.

Ex: If the input is:

```
3   automobile car   manufacturer maker   children kids
15 The automobile manufacturer recommends car seats for children if the automobile doesn't already have one.
```
then the output is:

```
The car maker recommends car seats for kids if the car doesn't already have one.
```
You can assume the original words are unique. For coding simplicity, follow each output word by a space, even the last one.

> Hint: For words to replace, use two vectors: One for the original words, and the other for the replacements.

Your program must define and call the following function that returns index of word's first occurrence in wordList. If not found, then the function returns `-1`.
`int FindWordInWordList(vector<string> wordList, string wordToFind)`