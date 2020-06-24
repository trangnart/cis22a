A state's Department of Motor Vehicles needs a program to generate license plate numbers. A license plate number consists of three letters followed by three digits, as in CBJ523. (So "number" is a bit inaccurate, but that's the standard word used for license plates). The plate numbers are given out in sequence, so given the current number, the program should output the next number. If the input is CBJ523, the output should be CBJ524. If the input is CBJ999, the output should be CBK000. For the last number ZZZ999, the next is AAA000.

Hints:
* Treat each character individually.
* Initially, don't try to create an "elegant" solution. Just consider each of the six places one at a time, starting from the right.
* For each place, if less than the max for that place ('9' for digits, 'Z' for letters), just increment that place. Note that you can just type c = c + 1 to get the next higher character for a digit like '5' or for a letter like 'K').
* If a place is at the max, set it with the '0' or 'A', and then set a boolean variable to true to indicate a "carry" is needed. (If a carry isn't needed, set to false).
* With the above process, you'll have 6 separate if-else statements.