# 12.45 PRACTICE: Functions**: Next char in string
![Difficult]

Write a function that, given a string, index, and character, returns the index of the first occurrence of the character starting the search at the index.
If not found, return `-1`.

If the inputs are `"Hello-friends"`, `3`, and `e`, the function returns `9` (indexing the `e` in friends).

## Hints
* Various approaches exist to solve this problem.
We prefer an approach that uses a for loop along with a boolean variables to indicate the character was found
(which should end the for loop immediately).

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow