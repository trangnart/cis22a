Commas make large integers easier to read. Ex: 145,020 is easier to read than 145020. Write a function that takes an integer, and returns a string representation of that number with commas appropriately inserted. If the input if 145020, the function returns string "145,020".

Hints:
* Develop incrementally: Start by just converting the integer to a string, without commas. Then update the program to insert commas.
* This problem is hard. Take your time. Do little by little.
* Write a function to convert a single integer digit to a char (DigitToChar). Then use that function in your function that converts an integer to a string.
* Insert one digit at a time into the string, starting with the one's place. Use % 10 to get the rightmost digit. Use / 10 to shift the number right (discarding the current 1's place).
* Use the string's insert() function. Note that insert at the front has a strange syntax. For string str: str.insert(str.begin(), yourChar)