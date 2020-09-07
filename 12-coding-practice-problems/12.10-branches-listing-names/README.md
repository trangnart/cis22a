# 12.10 PRACTICE: Branches*: Listing names
![Easy]

A university has a web page that displays the instructors for a course,
using the following algorithm:
If only one instructor exists, the instructor's first initial and last name are listed.
If two instructors exist, only their last names are listed, separated by `/`.
If three exist, only the first two are listed, with `/ …` following the second.
If none exist, print `TBD`.

Given six words representing three first and last names (each name a single word; latter names may be `none none`),
output one line of text listing the instructors' names using the algorithm.

## Input/Output
Input | Output
--- | ---
`Ann Jones none none none none` | `A. Jones`
`Ann Jones Mike Smith Lee Nguyen` | `Jones / Smith / …`

## Hints
* Use an `if-else` statement with four branches.
The first detects the situation of no instructors.
The second one instructor. Etc.
* Detect whether an instructor exists by checking if the first name is `none`.

[Easy]: https://flat.badgen.net/badge/Easy/★☆☆☆/green