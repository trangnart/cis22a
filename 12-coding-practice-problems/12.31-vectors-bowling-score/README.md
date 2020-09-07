# 12.31 PRACTICE: Vectors***: Bowling score
![Hard]

Bowling involves 10 frames.
Each frame starts with 10 pins.
The bowler has two throws to knock all 10 pins down.
The total score is the sum of pins knocked down, with some special rules.

## For the first 9 frames
* If all 10 pins are knocked down on a frame's first throw (a "strike"), that frame's score is the previous frame plus 10 plus the next two throws.
(No second throw is taken).
* If all 10 pins are knocked down after a frame's second throw (a "spare"), that frame's score is the previous frame plus 10 plus the next throw.

## The 10th frame
In the 10th frame, if the bowler's first throw is a strike,
or the first two throws yields a spare, the bowler gets a third throw.
The 10th frame's score is the previous frame's score plus the pins knocked down in the 10th frame's two or three throws.

Given integers represents all throws for a game,
output on one line each frame's score followed by a space
(and end with a newline).
Note that the number of throws may be as few as `11`
(strikes in first 9 frames, and no strike/spare in 10th frame),
or as many as `21` (2 throws in first `9` frames, then `3` in 10th).

For simplicity, the input will always have `21` integers.
If the game ended with fewer than 21 throws,
the remaining integers will be `0`'s and can be ignored.

## Example
A perfect game is one where every throw is a strike.
The 21 input integers will be:

### Input
```
10 10 10 10 10 10 10 10 10 10 10 10
```

### Output
```
30 60 90 120 150 180 210 240 270 300
```

## Hints
* A first for loop should just read in the 21 scores in the first vector.
* A second for loop should fill the second vector's first 9 elements
(first 9 frames).
* Additional code should compute the 10th frame, which is unique.

[Hard]: https://flat.badgen.net/badge/Hard/★★★☆/red