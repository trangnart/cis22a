A common statistic of interest is the longest sequence of some pattern in a list of items. For example, in football, one may be interested in the longest sequence of consecutive complete passes. Given a list in which each item is either the letter "I" (for an incomplete pass) or a number (for a completed pass), output the length of the longest sequence of complete passes. The list is preceded by the number of items. Given 8 4 15 9 I 30 2 I 20, the output is 3 (because the longest sequence of complete passes is 4 15 9).

Hints:
* Use two variables, one that keeps track of the current sequence length, and another for the longest sequence length.
* In a for loop that iterates through the vector, if you see an "I", set the current sequence length to 0.
* Otherwise, you are in sequence (either at the beginning or later in the sequence), so increment the current sequence length.
* A simple way to compute the longest sequence is to potentially update that variable every time you update the current sequence length. Check if the current is greater than the longest -- if so, update the longest.
* When done iterating, just output the value of the longest sequence length variable.