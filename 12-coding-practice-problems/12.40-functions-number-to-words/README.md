# 12.40 PRACTICE: Functions**: Number to words
Sometimes numbers are converted to words, like in a wedding invitation. So 23 becomes "twenty three". Write a function DigitToWord that takes a single digit number from 0-9 and returns that number's word: 0 is zero, 1 is one, 2 is two, etc (if the number is outside 0-9, return "error"). Write another function TensDigitToWord that takes a single digit number from 2-9, and returns that number's word when it appears in the tens digit: 2 is twenty, 3 is thirty, etc. If the number is outside 2-9, return "error". Finally, write a function TwoDigitNumToWords that takes a two-digit number from 20-99 and returns that number in words. Your main program should get a user's integer, call TwoDigitNumToWords, and output the resulting string. If the input is 23, the output should be "twenty three".

Do not do any error checking of the input. Note that your program does not support all numbers. 0-19 will yield error output, for example.

HINTS:
* Write DigitToWord first, and test the function (have your main call that function directly) -- you won't pass any of the tests, but you should still start that way. Next, write TensDigitToWord and test it by itself also. Finally, write TwoDigitNumToWords (calling your first two functions) and test the entire program.
* Your TwoDigitNumToWords function should pass the ten's digit to TensDigitToWord. To get the tens digit, divide the number by 10.
* Your TwoDigitNumToWords function should pass the one's digit to DigitToWord. To get the ones digit, mod the number by 10 (num % 10).
* You can concatenate the strings returned by those two functions using the + operator. Ex: "hello" + " " + "there" yields one string "hello there".