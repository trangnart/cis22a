# 12.6 PRACTICE: Branches*: Guitar tabs
![Easy]

A guitar has 6 strings that play the notes `E` (lowest), `A`, `D`, `G`, `B`, and `e` (highest).
A guitar's neck has regions called frets.
A musical chord like a `G` or `C` is a combination of notes,
and can be played by pressing certain strings at certain frets and then strumming all 6 strings.
To quickly learn to play chords, people share "tabs" -- visual indications of what strings to press.
To enable easy sharing over the internet,
tabs are usually shared as text files.
Write a program that takes a string input representing one of three chords (`G`, `C`, `D`) and outputs the corresponding tab.

## Input `G`, Output:
```
e|-3-
B|-0-
G|-0-
D|-0-
A|-2-
E|-3-
```
`0` means to strum the string open (without pressing).
`1` means to press the string at the first fret,
`2` at the second fret,
`3` at the third fret.

## Input `C`, Output:
```
e|-0-
B|-1-
G|-0-
D|-2-
A|-3-
E|---
```
The `-` on the `E` string below the numbers means to not strum that string for that chord.

## Input `D`, Output:
```
e|-2-
B|-3-
G|-2-
D|-0-
A|---
E|---
```
If the user enters an unrecognized chord like `Am`,
the output should be: `Am` is not a supported chord.

For more info, see [How to read tabs]. (The above three chords, `G` `C` `D`, is the sequence of chords in the classic song "Sweet Home Alabama".

## Hints
* Use an `if-else` that outputs the appropriate text per chord input.
* Using `\n` for newlines may make creating the output statements simpler, using a single output string per chord.
In fact, you can copy-paste the above output examples between ` `, then delete the new lines and spaces and replacing with `\n`.
* Use an ending `else` branch to output the error message.

[How to read tabs]: https://d1i98lg1qi3tmd.cloudfront.net/images/modules/BCS0/BC-108-TabExample-v2.gif

[Easy]: https://flat.badgen.net/badge/Easy/★☆☆☆/green