# 12.30 PRACTICE: Vectors**: Binary to decimal conversion
![Difficult]

A binary number's digits are only 0's and 1's, which each digit's weight being an increasing power of 2.
Ex: 110 is `1*2^2` + `1*2^1` + `0*2^0` = `1*4` + `1*2` + `0*1` = `4` + `2` + `0` = `6`.
A user enters an 8-bit binary number as 1's and 0's separated by spaces.
Then compute and output the decimal equivalent.

## Input/Output
Input | Output
--- | ---
`0 0 0 1 1 1 1 1` | `31`

## Binary Table
2^7 | 2^6| 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0
:--: | :--: | :--: |:--: | :--: | :--: | :--: | :--:
128 | 64 | 32 | 16 | 8 | 4 | 2 | 1
`0` | `0` | `0` | `1` | `1` | `1` | `1` | `1`


## Hints
* Store the bits in reverse, so that the rightmost bit is in element `0`.
* Write a for loop to read the input bits into a vector.
Then write a second for loop to compute the decimal equivalent.
* To compute the decimal equivalent, loop through the elements, multiplying each by a weight, and adding to a sum.
* Use a variable to hold the weight.
Start the weight at 1, and then multiply the weight by 2 at the end of each iteration.

[Difficult]: https://flat.badgen.net/badge/Difficult/★★☆☆/yellow